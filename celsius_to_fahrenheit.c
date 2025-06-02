#include <stdio.h> // Bibliothèque standard pour l'affichage et la lecture

int main() // fonction principal poind d'entre du programme
{
    float celsius, fahrenheit; // Déclaration des variables

    // Demander à l'utilisateur d'entrer la température en Celsius
    printf("Entrez la température en Celsius : ");
    scanf("%f", &celsius); // Lire la valeur entrée par l'utilisateur

    // Conversion Celsius -> Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Afficher le résultat
    printf("La température en Fahrenheit est : %.2f\n", fahrenheit);

    return 0; // Fin du programme
}

