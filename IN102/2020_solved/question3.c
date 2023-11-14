#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<time.h>



int* creer_grille(){


    int* tableau;

    tableau = malloc(sizeof(int)*9);

    for(int i=0;i<=8;i+=1){

        tableau[i] = 0;

    }


    return tableau;

}

int verifie_match_nul(int* tableau){
    int j=0;
    for(int i=0;i<=8;i+=1){
        if(tableau[i]!=0){
            j+=1;
        }
    }
    if(j==9){

        return 1;
    }

    return 0;

}

void afficher(int* matriz){

    for(int i=0;i<=8;i+=1){
        if(matriz[i]==0){
            printf(".");
        }else{
            if(matriz[i]==1){
                printf("x");
            }else{
                printf("o");
            }
        }
        if((i+1)%3==0){
            printf("\n");
        }
    }

}

void placer(int* grille,int chiffre, int jouer){
    grille[chiffre-1]=jouer;
}

void placer_alea(int* grille, int jouer){
    int chiffre = rand()%9;
    while (grille[chiffre]!=0 && verifie_match_nul(grille)!=1)
    {
        chiffre = rand()%9;
    }

    if(verifie_match_nul(grille)==1){
        while (grille[chiffre]!=2)
        {
            chiffre = rand()%9;

        }
    

    }

    placer(grille,chiffre+1,jouer);
}

void teste_affichage(){


    int* tableau_teste;

    tableau_teste = creer_grille();

    afficher(tableau_teste);

    tableau_teste[3]=1;
    tableau_teste[7]=2;

    afficher(tableau_teste);

    free(tableau_teste);

}

int a_gagne(int* grille, int jouer){

    for(int i =0;i<=2;i+=1){
        if( (grille[3*i+0]==grille[3*i+1]) && (grille[3*i+0]==grille[3*i+2]) && (grille[3*i+0]==jouer) ){
            return 1;
        }
        if( (grille[i]==grille[i+3]) && (grille[i]==grille[i+6]) && (grille[i]==jouer) ){
            return 1;
        }
    }

    if((grille[0]==grille[4]) && (grille[0]==grille[8]) && (grille[0]==jouer)){
        return 1;
    }
    if((grille[2]==grille[4]) && (grille[2]==grille[6]) && (grille[2]==jouer)){
        return 1;
    }
    
    return 0;
}



int main(int argv,char* argc[]){

    int* tableau;
    int chiffre=0;
    int tours=0;

    tableau = creer_grille();

    while(a_gagne(tableau,1)!=1 && a_gagne(tableau,2)!=1 && verifie_match_nul(tableau)!=1){
        afficher(tableau);
        printf("chiffre : ");
        scanf("%d",&chiffre);
        placer(tableau,chiffre,1);
        placer_alea(tableau,2);
        tours+=1;
    }
    
    afficher(tableau);

    if(a_gagne(tableau,1)==1){
        printf("Gagne en %d tours.",tours);
    }
    if(a_gagne(tableau,2)==1){
        printf("Perdu en %d tours.",tours);
    }
    if(a_gagne(tableau,2)==0 && a_gagne(tableau,1)==0 && verifie_match_nul(tableau)==1){
        printf("Match nul en %d tours.",tours);
    }

    return 0;
}