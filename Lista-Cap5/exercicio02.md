Questão 02.

a) Uma função em C só pode devolver um único valor pelo comando "return". Na função "calcular()", o programador tentou devolver "soma" e "media" ao mesmo tempo, mas isso não funciona: em "return soma, media;", a vírgula atua como operador vírgula, avaliando "soma", descartando-o e retornando apenas "media".

b) O "return;" dentro de "imprime_mensagem()" encerra a função imediatamente, impedindo que o segundo "printf" seja executado quando "erro < 0". Ele não é obrigatório no final de uma função "void", pois a função termina sozinha quando chega ao fechamento das chaves ("}"). Ele só precisa ser usado se quisermos sair antes do fim.

c) Reescrita em duas funções separadas:

```c
int calcularSoma(int a, int b, int c) {
    return a + b + c;
}

int calcularMedia(int a, int b, int c) {
    return (a + b + c) / 3;
}
```

Como o comando "return" só devolve um valor por chamada, quando precisamos de dois resultados distintos sem usar recursos como ponteiros ou structs, dividimos o cálculo em duas funções diferentes.
