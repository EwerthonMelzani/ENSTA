
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct intervale{

    int inf_ter;
    int sup_ter;


};

void affichage(struct intervale choisi){

    printf("Le intervale est: [%d,%d]\n",choisi.inf_ter,choisi.sup_ter);

};

struct intervale saisie_intervalle(void){

    int i,j;
    scanf(" [%d,%d]",&i,&j);

    struct intervale b = {i,j};
    return b;

};


struct intervale intersection(struct intervale* choisi1,struct intervale* choisi2){

    int inf,sup;

    if(choisi1->inf_ter>choisi2->inf_ter){

        inf = choisi1->inf_ter;

    }else{

        inf = choisi2->inf_ter;

    }
    
    
    if(choisi1->sup_ter>choisi2->sup_ter){


        sup = choisi2->sup_ter;
    }else{

        sup = choisi1->sup_ter;
    }

    struct intervale b = {inf,sup};


    return b;

};

struct intervale* saisie_tableau(int N){

    struct intervale* tableau = malloc(sizeof(struct intervale)*N);

    for(int i=0;i<N;i+=1){

        tableau[i] = saisie_intervalle();

    }

    return tableau;

}


int main(void){

    int n;

    scanf("%d",&n);

    struct intervale* a = saisie_tableau(n);

    for(int i = 0;i<n;i+=1){
        printf("%d,%d",a[i].inf_ter,a[i].sup_ter);
    }



    return 0;
};
