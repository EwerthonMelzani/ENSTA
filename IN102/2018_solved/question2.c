#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int verificacion(char* a,char* b,char* c){

    for(int i=0;a[i]!='\0';i+=1){

        if(a[i]!=b[i] || a[i]!=c[i]){

            return false;

        }

        if(a[i+1]=='\0' && (b[i+1]!='\0' || c[i+1]!='\0')){

            return false;
        }


    }

    return true;

    
}


int main(int argv,char* argc[]){

    int i=0;

    if(argv==4){

        i=verificacion(argc[1],argc[2],argc[3]);
        if(i==1){
            printf("Yes");
        }else{
            printf("No");
        }

    }



    return 0;
}