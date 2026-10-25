#include<stdio.h>
#include<stdlib.h>
#include"CListe.h"

Liste liste_vide(void){return NULL;}

int longueur(Liste l)
{
    int taille =0;
    Place p=l;
    while (p){taille++;p=p->suivant;}
    return taille; 
}

Place acces(Liste l,int k)
{
    int i;
    Place p;
    if (k<1 || k> longueur(l))
    {printf("Error: rang non valide ! \n");exit(-1);}
    if (k==1)
    {
        return l;
    }
    else
    {
        p=l;
        for ( i = 1; i < k; i++)
        {
            p=p->suivant;
        } 
        return p;
    }
}

element contenu(Liste l,Place p)
{
    if (l==NULL ||p==NULL)
    {
        printf("Error: liste vide !\n");
        exit(EXIT_FAILURE);
    }
    return p->valeur;
}

element keme(Liste l,int k)
{
    if (k<1 ||k>longueur(l))
    {
        printf("Error: rang non valide !\n");
        exit(-1);
    }
    return contenu(l,acces(l,k));
}

Place succ(Liste l,Place p)
{
    (void)l;
    if (p==NULL)
    {
        printf("Error: suivant derniere place !\n");
        exit(EXIT_FAILURE);
    }
    return p->suivant;   
}

Liste inserer(Liste l,int i, element e)
{
    if (i<1||i>longueur(l)+1)
    {
        printf("Error: rang non valide !\n");
        exit(EXIT_FAILURE);
    }
    
    Place pc=malloc(sizeof(Cellule));
    pc->valeur=e;
    pc->suivant=NULL;
    if (i==1)
    {
        pc->suivant=l;
        l=pc;
    }
    else
    {
        int j;
        Place p=l;
        for ( j = 1; j<i-1; j++)
        {
            p=p->suivant;
        }
        pc->suivant=p->suivant;
        p->suivant=pc;
    }
    return l;
}
Liste supprimer(Liste l, int i)
{
    int j;
    Place p;
    if (i<1 || i>longueur(l))
    {
        printf("Error: rang non valide! \n");
        exit(EXIT_FAILURE);
    }
    if (i==1)
    {
        p=l;
        l=l->suivant;
    }
    else
    {
        Place q;
        q=acces(l,i-1);
        p=succ(l,q);
        q->suivant=p->suivant;
    }
    free(p);
    return l;    
}

Liste ajouter(Liste l,Place p, element e)
{
    Place pc;
    pc=(Place)malloc(sizeof(Cellule));
    if (pc==NULL)
    {
        printf("Error: Probleme de memoire\n");
        exit(-1);
    }
    pc->valeur=e;
    pc->suivant = p->suivant;
    p->suivant=pc;
    return l;  
}

Liste enlever(Liste l, Place p)
{
    Place pred;
    if (p==1)
    {
        l=succ(l,p);
    }
    else
    {
        pred=l;
        while (succ(l,pred)!=p)
        {
            pred=succ(l,pred);
        }
        pred ->suivant=p->suivant;
    }
    free(p);
    return l;
}
