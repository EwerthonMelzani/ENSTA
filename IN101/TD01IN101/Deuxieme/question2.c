#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void poly(float* x){

    x[0] = 5 + x[0]*(2 + x[0]*x[0]*(5-3*x[0]) );


};


int main(){

    float a;


    scanf("%f",&a);


    poly(&a);

    printf("%0.f\n",a);


    return 0;
};