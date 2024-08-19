#include "scheduler.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Process {
    char name[20];
    int priority;
    struct Process *next;
} Process;

static Process *process_list = NULL;

void init_scheduler() {
    process_list = NULL;
    printf("Scheduler initialized.\n");
}

void add_process(char *name, int priority) {
    Process *new_process = (Process*)malloc(sizeof(Process));
    strncpy(new_process->name, name, 20);
    new_process->priority = priority;
    new_process->next = NULL;

    if (process_list == NULL) {
        process_list = new_process;
    } else {
        Process *current = process_list;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_process;
    }
    printf("Process %s added with priority %d.\n", name, priority);
}

void run_scheduler() {
    printf("Running the scheduler...\n");
    while (process_list != NULL) {
        Process *next_process = process_list;
        process_list = process_list->next;

        printf("Running process: %s with priority %d\n", next_process->name, next_process->priority);
        free(next_process);
    }
    printf("All processes completed.\n");
}

void command_prompt() {
    char command[256];
    while (1) {
        printf("KernixOS> ");
        fgets(command, sizeof(command), stdin);
        // Process commands here
    }
}