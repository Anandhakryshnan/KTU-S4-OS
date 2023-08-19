#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
void main(){
int fd1= open("test.txt",O_RDONLY);
if(fd1<0){
perror("error opening\n");
exit(1);
}
printf("opened the file description = %d\n",fd1);
if(close(fd1)<0){
perror("error closing");
exit(1);
}
printf("closed the file description successfully\n");
}
