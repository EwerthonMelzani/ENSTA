#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void nth(char* m,int n){



    if(n<0 || n > strlen(m)){

        printf("C`est pas possible\n");

    }else{

            printf("%c\n",m[n]);

    }

};

char nth2(char* m,int n){


    if(n<0 || n > strlen(m)){

        printf("C`est pas possible retourne\n");

        return '\0';

    }else{

        return m[n];

    }


};


int main(){

    char mot[100];
    
    int n;

    scanf("%s",mot);

    scanf("%d",&n);

    

    nth(mot,n);


    return 0;

};


