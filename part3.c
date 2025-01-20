#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){

    char *args[] = {"ls", "-l", NULL};
    //fork the main process

    //if this is the child process, replace it with the ls -l process using args

    //if this is the parent process, wait for the child and print a message when it is finished

    return 0;
}

