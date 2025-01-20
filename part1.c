#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
    int fd1;
    int fd2;
    char buf1[12] = "hello world";
    char buf2[12];


    // open example.txt for reading and writing twice with fd1 and fd2 and create it if it doesnt exist

    // print fd1 and fd2. will they be the same?

    //write to example.txt the content of buf1

    //print to stdout using the write function, the contents of the file

    //close the files

    return 0;
}