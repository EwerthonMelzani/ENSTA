/* Jeanne LAGAFFE */
#include <stdio.h>
int main() { printf("Hello World !!\n"); }

/*


Q1:

struct guerrier {

  char *nom;
  float vie_points;
  int attaque_points;
  float taux_guerison;
};*

Q2:

int main() {

  struct guerrier premiere = {"Aragorn", 100, 20, 0.6};
  struct guerrier deuxieme = {"Boromir", 100, 30, 0.4};

  return 0;
}


*/
/*

Q3:

#include <stdio.h>

struct guerrier {

  char *nom;
  float vie_points;
  int attaque_points;
  float taux_guerison;
};

void afficher_guerrier(struct guerrier g) {
  printf("Le nom:%s\nLa vie:%f\n", g.nom, g.vie_points);
}

int main() {

  struct guerrier Aragorn = {"Aragorn", 100, 20, 0.6};
  struct guerrier Boromir = {"Boromir", 100, 30, 0.4};
  afficher_guerrier(Aragorn);
  afficher_guerrier(Boromir);

  return 0;
}


*/
/*

Q4:

void attaque(struct guerrier *pjoueur, struct guerrier *padversaire) {
  padversaire->vie_points =
      padversaire->vie_points - (float)pjoueur->attaque_points;
}


Utlise les pointeurs est plus eficient que passe la structure dans les arguments
e apres faire la modification e returne elles;


*/
/*

Q5:

void bouclier(struct guerrier *pjoueur) {
  pjoueur->vie_points = pjoueur->vie_points +
                        pjoueur->taux_guerison * (100 - pjoueur->vie_points);
}


*/
/*

Q6:


#include <stdio.h>

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

void bouclier(struct guerrier *pjoueur) {
  pjoueur->vie_points = pjoueur->vie_points +
                        pjoueur->taux_guerison * (100 - pjoueur->vie_points);
}

int main() {

  struct guerrier Aragorn = {"Aragorn", 100, 20, 0.6};
  struct guerrier Boromir = {"Boromir", 100, 30, 0.4};
  struct guerrier *pjoueur = &Aragorn;
  struct guerrier *padversaire = &Boromir;

  for (int i = 1; i <= 5; i += 1) {

    printf("Round %d: %s attack %s\n", i, pjoueur->nom, padversaire->nom);
    bouclier(pjoueur);
    attaque(pjoueur, padversaire);
    afficher_guerrier(*pjoueur);
    afficher_guerrier(*padversaire);

    struct guerrier *intermed;
    intermed = pjoueur;
    pjoueur = padversaire;
    padversaire = intermed;
  }
  return 0;
}


*/
/*

Q7:

int main() {

  struct guerrier Aragorn = {"Aragorn", 100, 20, 0.6};
  struct guerrier Boromir = {"Boromir", 100, 30, 0.4};
  struct guerrier *pjoueur = &Aragorn;
  struct guerrier *padversaire = &Boromir;

  for (int i = 1; i <= 5; i += 1) {

    char touche;

    printf("Round %d: %s attack %s\n", i, pjoueur->nom, padversaire->nom);
    scanf(" %c", &touche);
    if (touche == 'a') {
      attaque(pjoueur, padversaire);
    }
    if (touche == 'b') {
      bouclier(pjoueur);
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

*/
/*

Q8:

int main() {

  struct guerrier *gagnant = 0;
  struct guerrier Aragorn = {"Aragorn", 100, 20, 0.6};
  struct guerrier Boromir = {"Boromir", 100, 30, 0.4};
  struct guerrier *pjoueur = &Aragorn;
  struct guerrier *padversaire = &Boromir;

  for (int i = 1; i <= 10; i += 1) {

    char touche;

    printf("Round %d: %s attack %s\n", i, pjoueur->nom, padversaire->nom);
    scanf(" %c", &touche);
    if (touche == 'a') {
      attaque(pjoueur, padversaire);
    }
    if (touche == 'b') {
      bouclier(pjoueur);
    }
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

*/
/*

Q9:

Est-il possible pour Aragon de jouer sans fin, même si Boromir joue les
meilleures actions possibles? Peut-il toujours gagner?

Oui , est possible pour Aragon jouer sans fin mais il ne peut pas toujour
gagner;

à cause de


*/
/*

Q10:

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


*/