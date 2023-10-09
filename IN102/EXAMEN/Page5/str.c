#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


char* complete(int length){

    char* string = malloc(sizeof(char)*length);

    return string;

}


void concatenation(int arguments,char* strings[]){

    int cont=0;
    int total=0;

    if(arguments>1){

        for(int i=1;i<arguments;i+=1){

            total = total + strlen(strings[i]);

        }

        total = total + arguments-2;

    }


    char* concat;

    concat = complete(total);



    for(int i=1;i<arguments;i+=1){

        if(i!=1){

            concat[cont]='-';
            cont+=1;

        }
        int k=0;

        while(strings[i][k]!='\0'){


            concat[cont] = strings[i][k];

            cont+=1;

            k+=1;

        }


        
    }

    printf("%s",concat);

    free(concat);

};



int main(int argc,char* argv[]){


    concatenation(argc,argv);


    printf("\n");



    return 0;
};