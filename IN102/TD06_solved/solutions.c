/* Ewerthon Araujo Melzani */ 
/* AST / INTERNACIONAL */
#include <stdio.h>
int main () {
   printf("Hello World !!\n");
}
/* 

Q1: 

#include <stdio.h>

struct intervale{

    int sup_ter;
    int inf_ter;

};

void affichage(struct intervale choisi){

    printf("Le intervale est: [%d,%d]\n",choisi.inf_ter,choisi.sup_ter);

};

int main(void){

    struct intervale premiere = {8,5};

    affichage(premiere);
    

    return 0;
};


*/
/*

Q2: 

void affichage(struct intervale choisi){

    printf("Le intervale est: [%d,%d]\n",choisi.inf_ter,choisi.sup_ter);

};


*/
/*

Q3:

#include <stdio.h>

struct intervale{

    int inf_ter;
    int sup_ter;


};

void affichage(struct intervale choisi){

    printf("Le intervale est: [%d,%d]\n",choisi.inf_ter,choisi.sup_ter);

};

int main(void){

    struct intervale premiere = {-3,5};
    struct intervale deuxieme = {-1,9};
    
    affichage(premiere);
    affichage(deuxieme);
    

    return 0;
};

*/
/*

Q4:

struct intervale saisie_intervalle(void){

    int i,j;
    scanf(" [%d,%d]",&i,&j);

    struct intervale b = {i,j};
    return b;

};

*/
/*

Q5:



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

};

struct intervale intersection_tableau(struct intervale* c,int n){

    struct intervale itx;

    if(n>1){

        for(int i=0;i<n-1;i+=1){

            if(i==0){

                itx = intersection(&c[0],&c[1]);

            }

            itx = intersection(&itx,&c[i+1]);

        }


        return itx;

    }else{

        itx.inf_ter = c[0].inf_ter;
        itx.sup_ter = c[0].sup_ter;

        return itx;
    }


};

void affichage_tableau_inverse(struct intervale* a,int n){

    for(int i = n-1;i>=0;i-=1){

        printf("[%d,%d]",a[i].inf_ter,a[i].sup_ter);


    }

};

int main(void){

    struct intervale a={-1,9};
    struct intervale b={-3,5};
    struct intervale c;

    c = intersection(&a,&b);

    affichage(c);
    
    
    return 0;
};





*/
/*

Q6:


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

*/
/*

Q7;



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

};

struct intervale intersection_tableau(struct intervale* c,int n){

    struct intervale itx;

    if(n>1){

        for(int i=0;i<n-1;i+=1){

            if(i==0){

                itx = intersection(&c[0],&c[1]);

            }

            itx = intersection(&itx,&c[i+1]);

        }


        return itx;

    }else{

        itx.inf_ter = c[0].inf_ter;
        itx.sup_ter = c[0].sup_ter;

        return itx;
    }


};

int main(void){

    int n;

    scanf("%d",&n);

    struct intervale b;
    struct intervale* a = saisie_tableau(n);

    for(int i = 0;i<n;i+=1){
        printf("[%d,%d]\n",a[i].inf_ter,a[i].sup_ter);
    }

    b=intersection_tableau(a,n);
    if(b.sup_ter<b.inf_ter){

        printf("L`intersection es vide\n");

    }else{
        printf("c`est intersection [%d,%d]\n",b.inf_ter,b.sup_ter);

    }


    return 0;
};


*/
/*

Q8:


void affichage_tableau_inverse(struct intervale* a,int n){

    for(int i = n-1;i>=0;i-=1){

        printf("[%d,%d]",a[i].inf_ter,a[i].sup_ter);


    }

};


*/
/*

Q9:


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

};

struct intervale intersection_tableau(struct intervale* c,int n){

    struct intervale itx;

    if(n>1){

        for(int i=0;i<n-1;i+=1){

            if(i==0){

                itx = intersection(&c[0],&c[1]);

            }

            itx = intersection(&itx,&c[i+1]);

        }


        return itx;

    }else{

        itx.inf_ter = c[0].inf_ter;
        itx.sup_ter = c[0].sup_ter;

        return itx;
    }


};

void affichage_tableau_inverse(struct intervale* a,int n){

    for(int i = n-1;i>=0;i-=1){

        printf("[%d,%d]",a[i].inf_ter,a[i].sup_ter);


    }

};

int main(void){

    int n;

    scanf("%d",&n);

    struct intervale b;
    struct intervale* a = saisie_tableau(n);

    for(int i = 0;i<n;i+=1){
        printf("[%d,%d]\n",a[i].inf_ter,a[i].sup_ter);
    }

    b=intersection_tableau(a,n);
    if(b.sup_ter<b.inf_ter){

        printf("L`intersection es vide\n");

    }else{
        printf("c`est intersection [%d,%d]\n",b.inf_ter,b.sup_ter);

    }

    affichage_tableau_inverse(a,n);

    printf("\n");

    free(a);

    return 0;
};



*/
