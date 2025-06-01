#include <stdio.h> // Bibliothèque pour l'affichage et la lecture

int main() // Fonction principale
{
    int n, original; // Déclaration des variables : n (entrée utilisateur), original (copie)
    int count = 0; // Compteur initialisé à 0

    printf("Entrez un nombre : "); // Demande à l'utilisateur
    scanf("%d", &n); // Lecture de la valeur entrée

    original = n; // On garde une copie de n dans "original"

    // Ici tu peux ajouter une boucle, par exemple pour compter les chiffres :
    while (n != 0)
    {
        count++;       // Incrémenter le compteur
        n = n / 10;    // Supprimer le dernier chiffre
    }

    printf("Le nombre %d contient %d chiffres.\n", original, count); // Affichage du résultat

    return 0; // Fin du programme
}
