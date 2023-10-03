#include <stdio.h>

void nth(char* p,int* n){

    printf("%c",p[*n]);

};

int main(void){


    int i=1;
    char chaine[] = "foo";


    nth(&chaine,&i);



    return 0;
}