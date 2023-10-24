#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "fract.h"


int mmc(int a,int b){
    int c=0;


    if(a==b){

        c=a;

        return c;


    }else{

        if(a>b){

            c=mmc(a-b,b);

            return c;

        }else{

            c = mmc(a,b-a);

            return c;


        }
        
    }

}

void afficher(struct fraction_t utilise){

    int div =mmc(utilise.num,utilise.denom);

    while(div!=1){

        utilise.num = utilise.num/div;
        utilise.denom = utilise.denom/div;

        div = mmc(utilise.num,utilise.denom);


    }

    if(utilise.sign==0){
        printf("%d/%d",utilise.num,utilise.denom);
    }else{
        printf("-%d/%d",utilise.num,utilise.denom);

    }

}


int main(int argv,char* argc[]){

char signal;
int i,j;

    if(argv==1){
        scanf("%c",&signal);
        scanf("%d",&i);
        scanf("%d",&j);

    }else{

        signal = argc[1][0];
        i = atoi(argc[2]);
        j = atoi(argc[3]);

    }



    if(signal=='+'){

        struct fraction_t numeraux = {S_pos,i,j};

        afficher(numeraux);

    }else{

        if(signal=='-'){

            struct fraction_t numeraux = {S_neg,i,j};

            afficher(numeraux);

        }
        


    }



    return 0;
}