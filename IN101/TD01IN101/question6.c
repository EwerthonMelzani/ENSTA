#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int sum(int i,int j){
    int res1,res2;
    res1 = i%5;
    res2 = j%5;
    int suma=0;
    printf("%d %d\n",res1,res2);
    i = i - res1;
    j = j - res2;

    if(i%2==0){

        if(j%2==0){

            atran-van@telecom-sudparis.eu
            
            for(int percorrir=0;i+5*percorrir<j;percorrir+=2){
                suma += i+5*percorrir;
            }

        }else{

            for(int percorrir=0;i+5*percorrir<=j;percorrir+=2){
                suma += i+5*percorrir;
            }

        }



    }else{

        if(j%2==0){

            for(int percorrir=1;i+5*percorrir<j;percorrir+=2){
                suma += i+5*percorrir;
            }


        }else{

            for(int percorrir=1;i+5*percorrir<=j;percorrir+=2){
                suma += i+5*percorrir;
            }


        }

    }

    return suma;
}


int main(){

    int x,y,sume;

    printf("Ecrit les limites:");
    scanf("%d %d",&x,&y);

    if(x>y){

        sume = sum(y,x);

    }else{

        sume = sum(x,y);

    }

    printf("%d\n",sume);

    return 0;
}