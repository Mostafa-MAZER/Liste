#include<stdio.h>
#include <stdlib.h>
#include"Tlist.h"

Liste liste_vide(void)
{
    Liste l;
    l.taille=0;
    return l;
}

int longueur(Liste l)
{
    return l.taille;
}

Liste supprimer(Liste l,int r)
{
    int i ;
    if (r<1||r>longueur(l))
    {
        printf("Error:rang non valide !\n");
        exit(1);
    }
    for ( i = r; i < longueur(l); i++)
    {
        l.tab[i-1]=l.tab[i];
    }
    (l.taille)--;
    return l;
}

Liste inserer(Liste l,int r,element e)
{
    
    if (longueur(l) == MAX_LISTE)
    {
    printf("Error: Liste saturee !\n");
    exit(1);
    }
    if (r<1 ||r>longueur(l)+1)
    {
        printf("Error: rang non valide !\n");
        exit(1);
    }
    for (int i = longueur(l); i >= r; i--)
    {
        l.tab[i]=l.tab[i-1];
    }
    l.tab[r-1]=e;
    (l.taille)++;
    return l;
}
element keme(Liste l,int k)
{
    if (k<1 || k> longueur(l))
    {
        printf("Error: rang non valide !\n");
        exit(1);
    }
    return l.tab[k-1];
}
