/* 
#include <stdio.h>
#include <stdlib.h>;                      <- Erro: Não precisa de ; no final.
int Main{}                                <- Erros: Main está com M maiúsculo e há chaves no lugar de parênteses.
(                                         <- Erro: Deveria abrir chaves no lugar de parênteses.
printf( Existem %d semanas no ano.,52);   <- Err: Faltam aspas no início e fim do texto.
cout << endl;                             <- Erro: Isso é de C++.
system("PAUSE");
return 0;
)                                         <- Erro: Deveria fechar chaves no lugar de parênteses.
*/


/* Código corrigido: */
#include <stdio.h>
#include <stdlib.h>

int main() {

printf("Existem %d semanas no ano.", 52);
system("PAUSE");
return 0;
}