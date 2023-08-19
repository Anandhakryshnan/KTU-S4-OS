#include<stdio.h>
#include<dirent.h>
void main(){
DIR *dir;
struct direct *dirt;
if((dir = opendir("HELLO"))== NULL){
printf("couldnt open directory\n");
}
}
