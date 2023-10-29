#include<stdio.h>
#include<stdlib.h>

struct coord{

    int x;
    int y;

};

void afficher_coord(struct coord c){

    printf("(%d,%d)",c.x,c.y);

}

void deplacer(struct coord* a,struct coord* b){

    a->x = a->x+b->x;
    a->y= a->y+b->y;

}

int main(int argv,char* argc[]){

    struct coord a={1,3};

    struct coord b={-2,7};

    

    deplacer(&a,&b);

    afficher_coord(a);

    afficher_coord(b);

    return 0;
}