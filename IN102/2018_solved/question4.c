#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* tableau(int a){
    int* tableau = malloc(sizeof(int)*a*a);

    for(int i=0;i<a;i+=1){
        for(int j=0;j<a;j+=1){
            tableau[a*i+j]=(j+i);
        }

    }

    return tableau;
}

void afficher_tableau(int* tableau,int a){

    for(int i=0;i<a;i+=1){
        for(int j=0;j<a;j+=1){
            printf("%d",tableau[a*i+j]);
            if(j!=(a-1)){

                printf(" ");

            }
        }

        printf("\n");

    }

}

int main(int argv,char* argc[]){

    int* matriz;
    int b;

    if(argv==2){
        b=atoi(argc[1]);
        if(b>0){

            matriz = tableau(b);

            afficher_tableau(matriz,b);


            free(matriz);
        }

    }

    return 0;
}