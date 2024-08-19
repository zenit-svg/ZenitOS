#include <stdio.h>

void create_file(const char *filename) {
    printf("File %s created.\n", filename);
}

void read_file(const char *filename) {
    printf("Reading file %s.\n", filename);
}

void delete_file(const char *filename) {
    printf("File %s deleted.\n", filename);
}