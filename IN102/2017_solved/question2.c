#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char* chaine_complete(char** palavras_separadas,int combien){

int length=0;

for(int i=1;combien-i!=0;i+=1){

    length = length + strlen(palavras_separadas[i]);

}

length = length + (combien - 2);

int contador=0;

char* palavra = malloc(sizeof(char)*length);


    for(int i=1;combien-i!=0;i+=1){

        for(int j=0;palavras_separadas[i][j]!='\0';j=j+1){
            palavra[contador] = palavras_separadas[i][j];
            contador+=1;
            if(palavras_separadas[i][j+1]=='\0'){
                palavra[contador] = ' ';
                contador+=1;
            }

        }

    }


    return palavra;

}


int main(int argv,char* argc[]){


    char* palavra_junta = chaine_complete(argc,argv);

    printf("%s",palavra_junta);

    free(palavra_junta);

    return 0;
}