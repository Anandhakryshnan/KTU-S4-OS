#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
void main(){
if(fork()==0){
printf("executing my child process\n");
}
else{
printf("executing parent");
wait(NULL);
printf("executing after termination");
}
}
