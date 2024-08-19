#include "process.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[32];
    int priority;
} Process;

static Process process_list[10];
static int process_count = 0;

void add_process(const char *name, int priority) {
    if (process_count < 10) {
        strncpy(process_list[process_count].name, name, sizeof(process_list[process_count].name) - 1);
        process_list[process_count].priority = priority;
        process_count++;
    } else {
        printf("Process list full.\n");
    }
}

void list_processes() {
    for (int i = 0; i < process_count; i++) {
        printf("Process: %s, Priority: %d\n", process_list[i].name, process_list[i].priority);
    }
}