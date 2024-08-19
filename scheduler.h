#ifndef SCHEDULER_H
#define SCHEDULER_H

void init_scheduler();
void add_process(char *name, int priority);
void run_scheduler();
void command_prompt();

#endif