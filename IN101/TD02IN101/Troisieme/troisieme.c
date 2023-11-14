#include<stdio.h>
#include<stdlib.h>

void make_arbre(int hauteur){
    int total = (1<<hauteur)-1;
    for(int i=0;i<=hauteur-1;i+=1){
        int I_space = (1<<(hauteur-1-i))-1;
        int B_space;
        if(i==0){
            B_space =0;
        }else{
            B_space = (total-2*I_space-(1<<i))/((1<<i)-1);
        }

        for(int k=0;k<I_space;k+=1){
            printf(" ");
        }        

        for(int j=0;j<((1<<i)-1);j+=1){
            printf("*");
            for(int k=0;k<B_space;k+=1){
                printf(" ");
            }
        }

        printf("*");

        for(int k=0;k<I_space;k+=1){
            printf(" ");
        }

        
        
        if(i!=(hauteur-1)){
            printf("\n");
            for(int k=0;k<total;k+=1){
                printf(" ");
            }
            printf("\n");

        }
        

    }

};

int main(){
    int hauteur;

    scanf("%d",&hauteur);

    make_arbre(hauteur);
};