#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int exponencial(int a,int b){

    if(b==0){

        return 1;

    }else{
        return a*exponencial(a,b-1);
    }

}


int conversion_binary(char* b){

int value_basis_10=0;
int size = strlen(b);


    for(int i=0;b[i]!='\0';i=i+1){

        
        if((b[i]-'0')==1){

            value_basis_10 = exponencial(2,size-i-1)+ value_basis_10;

        }


    }

    return value_basis_10;

};


int main(int argv,char* argc[]){

int value=0;

if(argv == 2){

    value = conversion_binary(argc[1]);

    printf("%d",value);

}else{

    printf("Error : expecting only one argument.");

}


return 0;
}