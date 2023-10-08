#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool same_sum(int* a,int* b){

    if((*a)%(*b)==0){

        return true;

    }else{

        return false;

    }

};


int main(int argc,char* argv[]){

    int a,b;

    scanf("(%d,%d)",&a,&b);



    if(b>0 && b<9 && a>0){


        printf("%d\n",same_sum(&a,&b));


    }else{

        if(b==0 && a==0){

            printf("%d\n",1);

        }else{

        printf("Probleme avec les intervale!\n");


        }

    }



    return 0;
};