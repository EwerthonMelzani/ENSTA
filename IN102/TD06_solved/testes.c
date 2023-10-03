#include <stdio.h>

struct intervale{

    int inf_ter;
    int sup_ter;


};

void affichage(struct intervale choisi){

    printf("Le intervale est: [%d,%d]\n",choisi.inf_ter,choisi.sup_ter);

};

struct intervale saisie_intervalle(void){

    int i,j;
    scanf(&i,&j);

    struct intervale b = {i,j};
    
    return b;
};

int main(void){

    struct intervale premiere = {-3,5};
    struct intervale deuxieme = {-1,9};
    
    affichage(premiere);
    affichage(deuxieme);
    

    return 0;
};