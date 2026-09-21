#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char ch;

    printf("Pressione uma tecla: ");
    ch = getche(); /*Aguarda digitação e mostra o que foi digitado*/
    /* ch = getch(); Aguarda digitação e mostra o que foi digitado*/

    printf("\nSucessora ASCII: %c\n", ch + 1);

    system("PAUSE");
    return 0;
}