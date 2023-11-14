#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void afficher(int *tableaus) {
  for (int i = 0; i < 3; i += 1) {
    for (int j = 0; j < 3; j += 1) {
      if(tableaus[3*i+j]==0){
        printf(".");
      }
      if(tableaus[3*i+j]==1){
        printf("x");
      }
      if(tableaus[3*i+j]==2){
        printf("o");
      }
    }
    if (i != 2) {
      printf("\n");
    }
  }
}

int *creer_grille() {
  int *tableau = malloc(sizeof(int) * 9);
  for (int i = 0; i < 9; i += 1) {
    tableau[i] = 0;
  }
  return tableau;
}

void placer(int *grille, int chiffre, int joueur) { grille[chiffre] = joueur; }

void placer_alea(int *grille, int joueur) {

  int i = rand() % (8 + 1);
  while (grille[i] != 0) {
    i = rand() % (8 + 1);
  }
  placer(grille, i, joueur);
}


int a_gagne(int* grille, int joueur){
  for (int i = 0; i < 3; i += 1) {
    
    if(grille[3*i]==joueur && grille[3*i+1]==joueur && grille[3*i+2]==joueur){
      return 1;
    }

    if(grille[i]==joueur && grille[i+3]==joueur && grille[i+6]==joueur){
      return 1;

    }

    
    
  }

  if(grille[2]==joueur && grille[4]==joueur && grille[6]==joueur){
      return 1;
    }
  
  if(grille[0]==joueur && grille[4]==joueur && grille[8]==joueur){
      return 1;
    }
  
  return 0;
  
}

void test_affichage() {
  int *i = creer_grille();
  afficher(i);
  printf("\n");
  i[3] = 1;
  i[7] = 2;
  afficher(i);
}

int match_nul(int* tableau){
  int verifi;
  for (int i = 0; i < 3; i += 1) {
    for (int j = 0; j < 3; j += 1) {
      verifi = tableau[j+3*i];
      if(verifi == 0){
        return 0;
      }
    }
  }
  return 1;
}

int main(void) {
  srand(time(0));
  int tours=1;

  
  int* i = creer_grille();
  
  while(a_gagne(i,1)==0 && a_gagne(i,2)==0){
    int position;
    
    afficher(i);
    
    printf("\nChoisi une posicion sur le tableau:");
    
    scanf("%d",&position);

    while(i[position]==1 || i[position]==2){
      printf("Enter another position");
      scanf("%d",&position);
    }
    
    placer(i,position,1);

    if(match_nul(i)==1 && a_gagne(i,1)==0){

      printf("Match nul en %d tours.",tours);
      afficher(i);
      break;
    }

    
    placer_alea(i, 2);


    tours+=1;
      
  }
    
  

  if(a_gagne(i,1)==1){
    printf("Le humain a gagne\n");
    afficher(i);
    printf("\n");

  }

    if(a_gagne(i,2)==1){
      
    printf("Le humain a gagne\n");
    afficher(i);
    printf("\n");
  }

  free(i);
  
  return 0;

}