#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void affichage_quotient(int a,int b,int n){
    int rest;
    printf("%d\n",b);
    if(b==0){
        printf("Ce diviseur est pas valide");
    }else{
        if(a*b<0){
            printf("-");
        }

        if(a<0){
            a=-a;
        }
        if(b<0){
            b=-b;
        }

        printf("%d",a/b);

        rest = (a%b)*10;

        if(rest!=0){
            printf(",");
        }

        while(n!=0 && rest!=0){

            

            printf("%d",rest/b);

        

            rest = 10*(rest%b);

            n = n-1;

        }

    }


}

int main(){

    int a,b;

    scanf("%d%d",&a,&b);

    affichage_quotient(a,b,3);


    return 0;
}