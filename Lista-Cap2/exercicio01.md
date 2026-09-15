Questão 01.

a) Qual é o valor numérico que será efetivamente exibido no console ao executar esse
programa?
```text
2
```

b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição? 
```text
A variável foi declarada como int, então ocorre uma conversão implícita de double para int. Nessa conversão, a parte decimal não é guardada; esse efeito é chamado de truncamento.
```

c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo
programador caso ele necessite arredondar o valor ou manter a precisão?
```text
Para manter a precisão, a variável deve ser declarada como float ou double. Se o objetivo for obter um inteiro, o programador pode controlar a conversão com funções de <math.h>, como round(), floor() ou ceil(). Por exemplo, (int) round(2.97) resulta em 3.
```
