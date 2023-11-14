#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<stdbool.h>

bool verifie_tableau(int* tableau,int taille){
    if(taille<=0){
        return false;
    }else{

        if(tableau[0]==0){
            return true;
        }

    }

    return false;

}

int main(){

    int vetor[6]={0,1,2,3,4,5};

    printf("%d",verifie_tableau(vetor,6));

    return 0;

}