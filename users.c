#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "users.h"

#define MAX_USERS 10

static User users[MAX_USERS];
static int user_count = 0;

void init_user_system() {
    user_count = 0;
    printf("User system initialized.\n");
}

int add_user(char *username, char *password) {
    if (user_count >= MAX_USERS) {
        printf("User limit reached.\n");
        return -1;
    }
    users[user_count].username = strdup(username);
    users[user_count].password = strdup(password);
    user_count++;
    printf("User %s added.\n", username);
    return 0;
}

int authenticate_user(char *username, char *password) {
    for (int i = 0; i < user_count; i++) {
        if (strcmp(users[i].username, username) == 0 &&
            strcmp(users[i].password, password) == 0) {
            printf("User %s authenticated.\n", username);
            return 1;
        }
    }
    printf("Authentication failed for user %s.\n", username);
    return 0;
}
