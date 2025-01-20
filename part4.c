#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
    int pipe_fd[2]; 
    pid_t pid;
    char child_message[40] = "Hello from the child process\n";
    char buffer[40];

    // create a pipe

    // fork the process

    // if it is the child process, send the message to the parent; 

    //if it is the parent process, wait for the child and read the message


    return 0;
}
