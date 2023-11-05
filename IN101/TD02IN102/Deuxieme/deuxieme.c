#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool sorted(int* tableau,int lenght){
    if (lenght<=2)
    {
        return true;
    }
    
    bool t_crois ;

    t_crois = (tableau[0]<=tableau[lenght-1]);
    for(int i=1;i<lenght;i+=1){
        if(t_crois==1){
            if(tableau[i-1]>tableau[i]){
                return false;
            }
        }else{
            if(tableau[i-1]<tableau[i]){
                return false;
            }
        }
    }

    return true;

}

int main(int argv,char* argc[]){

    int tableau1[1] = {1};
    printf("%d",sorted(tableau1,1));
    int tableau2[2] = {1,4};
    printf("%d",sorted(tableau2,2));
    int tableau3[3] = {1,4,3};
    printf("%d",sorted(tableau3,3));


    return 0;
}