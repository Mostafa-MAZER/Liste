# Structures de données en C

## 📌 Présentation

Ce projet est réalisé dans le cadre de mes études en informatique à l'Université Chouaib Doukkali, El Jadida, Maroc.

Il consiste à implémenter et à étudier deux structures de données fondamentales en langage C :

- **Les listes chaînées** (*Linked Lists*).
- **Les listes contiguës** (*Contiguous Lists*).

L'objectif est de comprendre leur fonctionnement, de manipuler les données et de maîtriser les opérations fondamentales sur les listes.

## 🛠️ Technologies utilisées

- **Langage :** C
- **Compilateur :** GCC
- **Éditeur :** Visual Studio Code
- **Gestion de versions :** Git et GitHub

## 📂 Organisation du projet

```text
Structures-de-Donnees-C/
├── ListeChainee/
│   ├── CListe.h
│   ├── CListe.c
│   └── main.c
├── ListeContigue/
│   ├── Tlist.h
│   ├── Tlist.c
│   └── main.c
└── README.md
```

*L'organisation peut être adaptée aux noms et aux dossiers réels du projet.*

## 1. Listes chaînées

Une liste chaînée est une structure de données composée de cellules. Chaque cellule contient une valeur et un pointeur vers la cellule suivante.

### Fonctions implémentées

### Fonctions implémentées

- **`liste_vide()`** : crée une liste vide.
- **`longueur(l)`** : retourne le nombre de cellules de la liste.
- **`acces(l, k)`** : retourne l'adresse de la cellule au rang `k`.
- **`contenu(l, p)`** : retourne la valeur contenue dans la cellule `p`.
- **`keme(l, k)`** : retourne la valeur située au rang `k`.
- **`succ(l, p)`** : retourne l'adresse de la cellule suivante.
- **`inserer(l, i, e)`** : insère l'élément `e` au rang `i`.
- **`supprimer(l, i)`** : supprime l'élément situé au rang `i`.
- **`ajouter(l, p, e)`** : ajoute l'élément `e` juste après la cellule `p`.
- **`enlever(l, p)`** : supprime la cellule `p` de la liste.
### Principe de fonctionnement

Les listes chaînées utilisent des pointeurs pour relier les cellules entre elles. L'allocation dynamique de mémoire permet de créer les cellules au fur et à mesure des besoins.

## 2. Listes contiguës

Une liste contiguë est une structure de données dans laquelle les éléments sont stockés dans un tableau. La taille logique indique le nombre d'éléments présents dans la liste.


### Fonctions implémentées

- **`liste_vide()`** : initialise une liste contiguë vide.
- **`longueur(l)`** : retourne le nombre d'éléments de la liste.
- **`keme(l, k)`** : retourne l'élément situé au rang `k`.
- **`inserer(l, r, e)`** : insère l'élément `e` au rang `r`, en décalant les éléments vers la droite.
- **`supprimer(l, r)`** : supprime l'élément situé au rang `r`, en décalant les éléments suivants vers la gauche.

### Principe de fonctionnement

Les listes contiguës utilisent un tableau de capacité fixe. L'insertion et la suppression nécessitent généralement le déplacement de certains éléments afin de préserver l'ordre de la liste.

## 🎯 Objectifs pédagogiques

- Comprendre les structures de données linéaires.
- Manipuler les pointeurs en langage C.
- Utiliser l'allocation dynamique de mémoire.
- Maîtriser les opérations d'insertion, de suppression et d'accès.
- Comprendre les différences entre tableaux et listes chaînées.
- Améliorer les compétences en programmation et en algorithmique.

## ⚙️ Compilation et exécution

Pour compiler un programme utilisant les listes chaînées :

```bash
gcc main.c CListe.c -o programme
```

Pour compiler un programme utilisant les listes contiguës :

```bash
gcc main.c Tlist.c -o programme
```

Sous Windows, exécute le programme avec :

```powershell
.\programme.exe
```

Ces commandes supposent que les fichiers concernés se trouvent dans le même dossier et que `main.c` contient la fonction `main()`.

## 📚 Contexte académique

Projet réalisé dans le cadre de l'apprentissage des structures de données en informatique à l'Université Chouaib Doukkali, El Jadida, Maroc.

## 👨‍💻 Auteur

**Mostafa Mazer**  
Computer Science Student