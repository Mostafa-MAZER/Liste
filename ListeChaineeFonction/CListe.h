#ifndef _LISTE_CHAINEE
#define _LISTE_CHAINEE

typedef int element;
typedef struct cellule *Place;
typedef struct cellule
{
    element valeur;
    struct cellule *suivant;
}Cellule;
typedef Cellule *Liste;

Liste liste_vide (void);

int longueur (Liste l);

Liste inserer (Liste l, int i, element e);

Liste supprimer (Liste l, int i);

element keme (Liste l, int k);

Place acces (Liste l, int i);

element contenu (Liste l, Place i);

Place succ (Liste l, Place i);

Liste ajouter(Liste l,Place p , element e);

Liste enlever(Liste l, Place p);

#endif