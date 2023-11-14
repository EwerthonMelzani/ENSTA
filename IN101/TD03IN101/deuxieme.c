#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct position{
    unsigned int x;
    unsigned int y;
};

int abs(int a){
    if(a<0){
        a = -a;
    }

    return a;
}

bool valide_moviment(struct position a,struct position b){

    if(b.x>8 || b.y>8 ){
        return false;
    }

    return (abs(b.y-a.y)==abs(b.x-a.x));


};

int main(){

    struct position a = {1,1};

    struct position b = {3,3};

    printf("%d",valide_moviment(a,b));

    return 0;
}