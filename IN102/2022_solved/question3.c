#include<stdio.h>
#include<stdlib.h>

struct point{
    int x;
    int y;
    int z;
};

void affiche(struct point c){
    printf("(%d,%d,%d)",c.x,c.y,c.z);
};

void produit(struct point* a, struct point* b){
    struct point c;

    c.x=a->y*b->z-a->z*b->y;
    c.y=a->z*b->x-a->x*b->z;
    c.z=a->x*b->y-a->y*b->x;

    a->x=c.x;
    a->y=c.y;
    a->z=c.z;

};


int main(int argv,char* argc[]){

    struct point a={atoi(argc[1]),atoi(argc[2]),atoi(argc[3])};
    struct point b={atoi(argc[4]),atoi(argc[5]),atoi(argc[6])};

    produit(&a,&b);

    affiche(a);

    return 0;
}