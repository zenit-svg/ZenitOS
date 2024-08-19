#include "memory.h"

#define MAX_MEMORY (1024 * 1024) // 1 MB de memoria simulada

static size_t used_memory = 0;

void print_string(const char *str) {
    while (*str) {
        // Implementa esta función para salida según tu entorno
        // Ejemplo: putchar(*str++);
    }
}

void init_memory() {
    char buffer[100];
    snprintf(buffer, sizeof(buffer), "Memory manager initialized. %zu bytes available.\n", MAX_MEMORY);
    print_string(buffer);
}

void* allocate_memory(size_t size) {
    if (used_memory + size > MAX_MEMORY) {
        char buffer[100];
        snprintf(buffer, sizeof(buffer), "Not enough memory to allocate %zu bytes.\n", size);
        print_string(buffer);
        return NULL;
    }
    used_memory += size;
    char buffer[100];
    snprintf(buffer, sizeof(buffer), "Allocated %zu bytes. %zu bytes remaining.\n", size, MAX_MEMORY - used_memory);
    print_string(buffer);
    return (void*)(used_memory - size);
}

void free_memory(void* ptr, size_t size) {
    used_memory -= size;
    char buffer[100];
    snprintf(buffer, sizeof(buffer), "Freed %zu bytes. %zu bytes remaining.\n", size, MAX_MEMORY - used_memory);
    print_string(buffer);
}
