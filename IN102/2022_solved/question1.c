#include<stdlib.h>
#include<stdio.h>

float difference(char* numeraux[],int size){
double max=0;
double min=0;

    for(int i=1;i<size;i+=1){

        if(i==1){
            max = atof(numeraux[i]);
            min = atof(numeraux[i]);

        }else{

            double current = atof(numeraux[i]);

            if(current>max){
                max = current;
            }

            if(current<min){
                min = current;
            }
        }

    }


    return (float)(max-min);
}


int main(int argv,char* argc[]){
    float dif;

    dif = difference(argc,argv);

    printf("%g",dif);
   
    return 0;
}