#include "interv.h"
#include<stdlib.h>
#include<stdio.h>


int main(){

    struct interval_t a;
    struct interval_t b;


    scanf("%d%d",&a.inf,&a.sup);
    scanf("%d%d",&b.inf,&b.sup);


    if(b.inf>a.sup || a.inf>b.sup){
        printf("Empty");
    }else{
        if(b.inf>a.inf){
            a.inf=b.inf;
        }else{
            b.inf=a.inf;
        }

        if(b.sup>a.sup){
            b.sup=a.sup;
        }else{
            a.sup=b.sup;
        }

        printf("[%d ; %d]",a.inf,a.sup);

    }



    return 0;
}