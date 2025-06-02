#include <stdio.h> // Bibliothèque standard pour l'affichage et la lecture

int main() { // Fonction principale, point d'entrée du programme
    int n, original, reserve = 0; 
    // Déclaration des variables :
    // - n : le nombre saisi par l'utilisateur
    // - original : pour garder une copie du nombre initial
    // - reserve : pour stocker l'inverse du nombre

    printf("Entrez un nombre entier : ");
    scanf("%d", &n); // Lecture de l'entrée utilisateur

    original = n; // On garde une copie du nombre d'origine

    while (n != 0) {
        int reste = n % 10;         // On prend le dernier chiffre
        reserve = reserve * 10 + reste; // On construit le nombre inversé
        n = n / 10;                 // On enlève le dernier chiffre
    }

    printf("Le nombre inverse de %d est : %d\n", original, reserve);

    return 0;
}
