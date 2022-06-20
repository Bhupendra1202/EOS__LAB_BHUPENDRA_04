#include <sys/types.h>
      
       #include <stdio.h>
       #include <stdlib.h>
       #include <unistd.h>
       #include <string.h>
        
       #include <sys/stat.h>
       #include <fcntl.h>



int main()
{

    int R_fd;

    R_fd = open("hello_world",O_WRONLY);
    write(R_fd,"inside hello\n",20);
    close(R_fd);
    return 0;
}