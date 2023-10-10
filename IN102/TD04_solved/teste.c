#include <stdio.h>
#include <stdlib.h>

void vie_aleatorique( ) {
  int i = rand() % (1 + 1);
  int j = rand() % (5 + 1);
  if (i == 0) {
    printf("%d",j);
  }
  if (i == 1) {
    printf("%d",-j);
  }
}

int main(){

  for(int i=0;i<=40;i+=1){
    vie_aleatorique();
  }
  
  return 0;  
}