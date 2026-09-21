#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unsigned char ch;

    for (;;){
        printf("%d ", rand() % 2); //Tela do matrix
    }
    
    system("PAUSE");
    return 0;
}