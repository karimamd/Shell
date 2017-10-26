/*
//
// Created by kareem on 24/10/17.
//
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <memory.h>
#include <string.h>

int main(int argc, char **argv, char **env) {
    pid_t pid;
    pid = fork();
    char *tmp;
    puts("hi");
    //fgets(tmp,2,stdin);
    scanf("%s", tmp);

    if (pid < 0) {
        puts("error");
    }

    if (pid == 0) {

        puts("hello");
        if (strcmp(tmp, "ls")) {

            if (execve("/bin/ls", argv, env) == -1)
                printf("error in exec.");

            else { puts("success"); }

        }
    } else {

        puts("Parent Code");
    }

    return 0;
}
 */