#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nth(char* p,int* index){

    if(*index>= strlen(p) || *index <0){
        printf("Too large");

    }else{
        printf("%c \n",p[*index]);
    }

};


int main(){

    char str[70];
    int pos;
    printf("\nInput:\n");
    scanf("%s %d",str,&pos);
    nth(str,&pos);
    return 0;
}