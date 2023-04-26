#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

int main(int argc, char **argv, char **envp) {
    char buffer[BUFFER_SIZE];
    char *args[2];
    int status;

    while (1) {
        printf("#cisfun$ ");
        fflush(stdout);

        if (fgets(buffer, BUFFER_SIZE, stdin) == NULL) {
            printf("\n");
            return 0;
        }

        if (buffer[strlen(buffer) - 1] == '\n') {
            buffer[strlen(buffer) - 1] = '\0';
        }

        args[0] = buffer;
        args[1] = NULL;

        if (fork() == 0) {
            if (execve(args[0], args, envp) == -1) {
                printf("%s: command not found\n", args[0]);
                exit(1);
            }
        } else {
            wait(&status);
        }
    }
}
