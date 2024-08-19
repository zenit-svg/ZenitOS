#include "memory.h"
#include <stdio.h>

#define MAX_MEMORY (1024 * 1024) // 1 MB of simulated memory

static size_t used_memory = 0;

void init_memory() {
    printf("Memory manager initialized. %zu bytes available.\n", MAX_MEMORY);
}

void* allocate_memory(size_t size) {
    if (used_memory + size > MAX_MEMORY) {
        printf("Not enough memory to allocate %zu bytes.\n", size);
        return NULL;
    }
    used_memory += size;
    printf("Allocated %zu bytes. %zu bytes remaining.\n", size, MAX_MEMORY - used_memory);
    return (void*)(used_memory - size);
}

void free_memory(void* ptr, size_t size) {
    used_memory -= size;
    printf("Freed %zu bytes. %zu bytes remaining.\n", size, MAX_MEMORY - used_memory);
}