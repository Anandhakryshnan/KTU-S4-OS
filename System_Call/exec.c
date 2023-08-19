#include <stdio.h>
#include <unistd.h>
int main (){
printf("in sys2.c\n");
char * args[] = {"./sys3",NULL};
execv(args[0],args);
return 0;
}
