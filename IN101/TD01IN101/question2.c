#include <stdio.h>

float poly(float p){

    p = p*(2+p*p*(5-3*p)) + 5;

    return p;
};

int main(void){

    float x;

    scanf("%f",&x);

    printf("Le value du poly est = %f\n",poly(x));


    return 0;
}