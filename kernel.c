#include <stdio.h>
#include "scheduler.h"

void init_memory() {
    printf("Memory manager initialized. 1 MB of simulated memory available.\n");
}

void init_filesystem() {
    printf("Filesystem initialized.\n");
}

void init_keyboard() {
    printf("Keyboard driver initialized.\n");
}

void init_display() {
    printf("Display driver initialized.\n");
}

int main() {
    init_memory();
    init_filesystem();
    init_keyboard();
    init_display();
    init_scheduler();

    add_process("Process1", 1);
    add_process("Process2", 2);

    run_scheduler();
    command_prompt(); // CLI for user commands

    return 0;
}