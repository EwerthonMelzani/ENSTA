#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool same_sum(int n,int c){
    if(c>0 && c<=9){
        if(n%c==0){

        return true;

        }else{

        return false;
        
        }

    }else{
        if(c==0){

            return 1;

        }else{

            if(c>9){

                printf("Le valeur est dehors de domain");

                return 1;

            }
        }
    }
    

}


int main(){


    printf("%d",5%0);
    return 0;
}