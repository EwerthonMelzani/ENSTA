#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int compter(double x,double y,int kmax){
    int k=0;
    double a,b,c;
    a=0;
    b=0;
    c=0;


    while (a*a+b*b<=4 && k<kmax)
    {
        c = a*b;
        a = a*a - b*b + x;
        b = 2*c + y;
        k = k +1;
    }

    return k;

}

int* calc_image(int w,int h,double xleft,double ytop,double xwidth,int kmax){

    int* tableau = malloc(sizeof(int)*w*h);

    for(int i=0;i<h;i+=1){
        for (int j = 0; j<w; j+=1)
        {
            
            double x = xleft + xwidth*((double)j/(double)(w-1));
            double y = ytop - xwidth*(((double)h/(double)w))*((double)i/(double)(h-1));
            tableau[i*w+j] = compter(x,y,kmax);

        }
        
    }

    return tableau;

}

void afficher(int* tableau,int w,int h,int kmax){
    char clavier[]=" .,:;-+uco*#&8%@";
    for(int i=0;i<h;i+=1){
            for (int j = 0; j<w; j+=1)
            {
                
                
                printf("%c",clavier[(int)(15*(double)tableau[i*w+j]/(double)kmax)]) ;

            }

            printf("\n");
            
        }


}

void hist(int w,int h,int kmax){
    int* tableau;
    tableau = calc_image(w,h,-2,1,3,kmax);

    afficher(tableau,w,h,kmax);

    free(tableau);
}

int main(int argv,char* argc[]){

    int w,h;
    

    w = atoi(argc[1]);
    h = atoi(argc[2]);

    hist(w,h,100);
    
    
    return 0;
}