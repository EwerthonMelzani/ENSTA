#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


void multiplicite(char* numeraux){

    int numero = atoi(numeraux);

    int x=2;
    
    while(numero!=1){
        for(int i=0;numero%x==0;i+=1){

            numero = numero/x;
        

            if(numero%x!=0){

                if(i+1==1){

                    printf("%d-",x);


                }else{

                    printf("%d^%d-",x,i+1);

                }


            }
        }


        x=x+1;


    }

    printf("\n");


};


int main(int argc,char* argv[]){

    multiplicite(argv[1]);

    return 0;
}