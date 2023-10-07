#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void affichege_occurence(char* chaine,char* a){

    int n=0;
    int i=0;

    while(chaine[n]!='\0'){

        if(chaine[n]== *a){

            i+=1;

        }

        n+=1;
    }

    printf("%d\n",i);

};


int main(int argc, char* argv[]){

    
    if(argc>3 || argc<3 || argv[2][1]!='\0'){

        printf("Erreur.Usage:lettre.xmotc.\n");

    }else{

        affichege_occurence(argv[1],argv[2]);
    }


    return 0;

};