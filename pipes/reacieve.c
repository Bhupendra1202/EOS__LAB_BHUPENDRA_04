#include <sys/types.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
 
#include <sys/stat.h>
#include <fcntl.h>


int main(){
 unsigned char buff[20];
    int R_fd;

  R_fd = open("hello_world",O_RDONLY);
    read(R_fd,buff,18);
    printf("Read Data:%s",buff);
    close(R_fd);
    return 0;
}