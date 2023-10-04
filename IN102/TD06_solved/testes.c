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


int main(void){

    struct intervale a={-1,9};
    struct intervale b={-3,5};
    struct intervale c;

    

    affichage(b);

    affichage(a);

    c = intersection(&b,&a);

    printf("L`interval de intersection est = [%d,%d]\n",c.inf_ter,c.sup_ter);


    return 0;
};