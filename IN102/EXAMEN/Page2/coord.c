#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct coordonees{

    //float est plus generaliste
    float x;
    float y;

};

void afficher(struct coordonees* a){

    printf("(%.0f;%.0f)",a[0].x,a[0].y);

};

void deplacer(struct coordonees* a,struct coordonees* b){

    a->x = a->x + b->x;
    a->y = a->y + b->y;


};

int main(){


    struct coordonees a={1,3};
    struct coordonees b={-2,7};

    afficher(&a);

    deplacer(&a,&b);

    afficher(&a);


    return 0;

};


/*

Q1:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct coordonees{

    float x;
    float y;

};






int main(){


    struct coordonees a={1,3};
    struct coordonees b={-2,7};




    return 0;

};


*/
/*

Q2:

void afficher(struct coordonees* a){

    printf("(%f;%f)",a[0].x,a[0].y);

};

*/
/*

Q3:


void deplacer(struct coordonees* a,struct coordonees* b){

    a->x = a->x + b->x;
    a->y = a->y + b->y;


};


*/
/*






*/