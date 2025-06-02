// Ce programme lit trois entiers et affiche le plus grand.
// Écrit avec l'aide d'une IA (ChatGPT – OpenAI)

#include <stdio.h>

int main() {
    int a, b, c;

    // Demander à l'utilisateur de saisir trois nombres
    printf("Entrez trois entiers : ");
    scanf("%d %d %d", &a, &b, &c);

    int max; // Variable pour stocker le plus grand

    // Utilisation des conditions multiples pour trouver le plus grand nombre
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    // Affichage du résultat
    printf("Le plus grand nombre est : %d\n", max);

    return 0;
}
