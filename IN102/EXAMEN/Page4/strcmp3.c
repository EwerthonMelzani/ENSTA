#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

bool comparaison(char* s1,char* s2,char* s3){


    for(int i=0; s1[i]!='\0';i+=1){

        if(s1[i]!=s2[i] || s2[i]!=s3[i]){

            return false;

        }


        if(s1[i+1]=='\0'){
            if(s2[i+1]=='\0' && s3[i+1]=='\0'){

                return true;

            }else{

                return false;

            }
        }


    }

    return true;

}


int main(int argc, char* argv[]){

    
    bool a;


    a=comparaison(argv[1],argv[2],argv[3]);

    if(a==1){

        printf("YES\n");


    }else{

        printf("NO\n");


    }



    return 0;

};