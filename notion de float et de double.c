#include <stdio.h>

int main()
{
    int nombre;
    printf("entrez un nombre\n");
    scanf("%f", &nombre);

    printf("le nombre est %f", nombre);

    //essayons d'additionner
    float nb1, nb2, multiplication;
    printf("entrez un premier nombre\n");
    scanf("%f", &nb1);

    printf("entrez le deuxieme nombre\n");
    scanf("%f", &nb2);

    multiplication = nb1 * nb2;

    printf("%f * %f =%0.2f\n", nb1, nb2, multiplication);

    return 0;


}


