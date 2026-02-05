#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    for(int i=0; i<3; i++) {
        if(fork() == 0) {
            exit(0); // Child exits immediately
        }
    }
    int status;
    pid_t pid;
    while((pid = wait(&status)) > 0) {
        printf("Cleaned up child PID: %d\n", pid);
    }
    return 0;
}
