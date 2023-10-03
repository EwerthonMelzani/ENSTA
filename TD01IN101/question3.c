#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct point{

    float x;
    float y;

};

bool colineaire(struct point a,struct point b,struct point c ){

    if(a.x*(b.y-c.y)-a.y*(b.x+c.x)+(b.x*c.y-b.y*c.x)==0){
        
        return 0;

    }else{

        return 1;
        
    }

};

int main(){



    return 0;
}