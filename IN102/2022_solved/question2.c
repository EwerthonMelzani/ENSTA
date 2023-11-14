#include<stdlib.h>
#include<stdio.h>

void affichage(char* word){
int numeraux_min=0;
int numeraux_ant=0;

    for(int i=0;word[i]!='\0';i+=1){
        
        if((int)word[i]>numeraux_ant){
            numeraux_min=(int)word[i];
        }

        printf("%c,%c:",numeraux_min,numeraux_ant);
        
        for(int j=0;word[j]!='\0';j+=1){

                int numeraux=(int)word[j];

                if(numeraux_min>numeraux && numeraux > numeraux_ant ){

                    numeraux_min =  numeraux;
                }
                    
        }

        printf("%c,%c:",numeraux_min,numeraux_ant);


        int contador=0;

        for(int j=0;word[j]!='\0';j+=1){
            int numeraux=(int)word[j];

            if(numeraux_min==numeraux){

                contador+=1;
            }
            


        }

        printf("%c,%c:",numeraux_min,numeraux_ant);

    /*    if(numeraux_min>numeraux_ant){
            
            printf("%c:%d",numeraux_min,contador);
            if(word[i+1]!='\0'){
                printf(",");
            }

        }
    */

        numeraux_ant = numeraux_min;

        

    }


}


int main(int argv,char* argc[]){


    if(argv==2){
        affichage(argc[1]);
    }


    return 0;
}