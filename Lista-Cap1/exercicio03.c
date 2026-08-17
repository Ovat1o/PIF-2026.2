/* Esse programa mostra uma multiplicação entre dois números (3 e 5),
 * resultando no número 15. */

#include <stdio.h> /* Para printf() */
#include <stdlib.h> /* Para system() */

int main()   /* Função main */
{ /* Início do corpo da função main */
    int numero1 = 3; /* Declaração da variável numero1 */
    int numero2 = 5; /* Declaração da variável numero2 */
    int resultado = numero1 * numero2; /* Declaração e cálculo para a variável resultado */

    printf("O resultado da conta 3 x 5 resulta em: %d\n", resultado); /* Chamada à função printf mostrando resultado */

    system("PAUSE"); /* Chamada à função system */
    return 0;
}/* Fim do corpo da função main */