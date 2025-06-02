#include <stdio.h>
#include <stdlib.h>  // pour utiliser atoi()

int main(int argc, char *argv[]) {
    // Vérifier que l'utilisateur a fourni un argument (la valeur limite)
    if (argc != 2) {
        printf("Usage : %s valeur_limite\n", argv[0]);
        return 1; // Quitter avec une erreur
    }

    // Convertir l'argument en entier
    int limite = atoi(argv[1]);

    // Vérifier que la valeur est positive
    if (limite < 0) {
        printf("Veuillez entrer une valeur positive.\n");
        return 1;
    }

    // Initialiser les deux premiers termes de la suite de Fibonacci
    int a = 0;
    int b = 1;

    // Afficher les termes tant qu'ils sont inférieurs ou égaux à la limite
    printf("Fibonacci : ");

    while (a <= limite) {
        printf("%d ", a);

        // Calculer le terme suivant
        int suivant = a + b;
        a = b;
        b = suivant;
    }

    printf("\n");
    return 0;
}
