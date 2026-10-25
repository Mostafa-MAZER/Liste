
#ifndef _LISTE_TABLEAU
#define _LISTE_TABLEAU
#define MAX_LISTE 100

typedef int element;

typedef int Place;

typedef struct 
{
    element tab[MAX_LISTE];
    int taille;
}Liste;

Liste liste_vide(void);

int longueur(Liste l);

Liste inserer(Liste l,int i,element e);

Liste supprimer(Liste l,int i);

element keme(Liste l,int i);

#endif