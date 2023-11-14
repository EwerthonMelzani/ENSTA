#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct guerrier {

  char *nom;
  float vie_points;
  int attaque_points;
  float taux_guerison;
};

void afficher_guerrier(struct guerrier g) {
  printf("Le nom:%s\nLa vie:%f\n", g.nom, g.vie_points);
}

void attaque(struct guerrier *pjoueur, struct guerrier *padversaire) {
  padversaire->vie_points =
      padversaire->vie_points - (float)pjoueur->attaque_points;
}

void vie_aleatorique(struct guerrier *padversaire) {
  int i = rand() % (1 + 1);
  int j = rand() % (5 + 1);

  if (i == 0) {
    padversaire->vie_points = padversaire->vie_points-j;
  }
  if (i == 1) {
    padversaire->vie_points = padversaire->vie_points+j;
  }
}

void bouclier(struct guerrier *pjoueur) {
  pjoueur->vie_points = pjoueur->vie_points +
                        pjoueur->taux_guerison * (100 - pjoueur->vie_points);
}

int main() {

  srand(time(0));

  struct guerrier *gagnant = 0;
  struct guerrier Aragorn = {"Aragorn", 100, 20, 0.6};
  struct guerrier Boromir = {"Boromir", 100, 30, 0.4};
  struct guerrier *pjoueur = &Aragorn;
  struct guerrier *padversaire = &Boromir;

  for (int i = 1; i <= 200; i += 1) {

    char touche;

    printf("Round %d: %s turn %s\n", i, pjoueur->nom, padversaire->nom);
    scanf(" %c", &touche);
    if (touche == 'a') {
      attaque(pjoueur, padversaire);
    }
    if (touche == 'b') {
      bouclier(pjoueur);
    }
    vie_aleatorique(padversaire);
    if (padversaire->vie_points <= 0) {
      gagnant = pjoueur;
      printf("Le guerrier vainqueur:%s avec %d tours joues", gagnant->nom, i);
      break;
    }
    afficher_guerrier(*pjoueur);
    afficher_guerrier(*padversaire);

    struct guerrier *intermed;
    intermed = pjoueur;
    pjoueur = padversaire;
    padversaire = intermed;
  }
  return 0;
}
