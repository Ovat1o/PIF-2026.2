Questão 6.

a) Porque a variável "soma" está sendo declarada dentro do for, causando erro.

b) O for será percorrido até o 4, pulará o 5 e quebra no 8.

c) O resultado será "Soma final = 115".
```c
#include <stdio.h>
#include <stdlib.h>
int main() {
int i;
for (i = 1; i <= 10; i++) {
if (i == 5) continue;
if (i == 8) break;
int soma = 0;
soma += i * i;
}

printf("Soma final = %d\n", soma);
system("PAUSE");

return 0;
}
```