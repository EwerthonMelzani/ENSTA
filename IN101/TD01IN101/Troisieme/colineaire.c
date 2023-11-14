#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<float.h>





bool col(double ax,double ay,double bx,double by,double cx,double cy){

    double eps = (by-ay)*(cx-bx)  - (bx-ax)*(cy-by);

    if(eps <= DBL_MIN){

        return true;

    }else{

        return false;
    }

};


int main(){

    bool a;
    double x = 13.1;
    double y;
    y = sqrt(x);
    


    a = col(1,1,y*y,x,5,5);


    printf("%d\n",a);


    return 0;
}