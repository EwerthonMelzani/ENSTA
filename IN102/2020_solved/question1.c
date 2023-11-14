#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int comparaison(char a,char* b){
    int j=0;

    for(int i=0;b[i]!='\0';i+=1){


        if(b[i]==a){
            j+=1;
        }


    }

    return j;

}


int main(int argv,char* argc[]){


    if(argv==3 && argc[2][1]=='\0'){

        int cont;
        cont = comparaison(argc[2][0],argc[1]);

        printf("%d",cont);

    }else{

        printf("Erreur. Usage : lettre.x mot c");

    }


    return 0;
}