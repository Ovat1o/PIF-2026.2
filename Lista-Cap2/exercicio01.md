Questão 01.

a) Qual é o valor numérico que será efetivamente exibido no console ao executar esse
programa?
```text
2
```

b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição? 
```text
    A variável foi declarada como inteiro, então a parte decimal não é guardada. Esse fenômeno é chamado de truncamento.
```

c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo
programador caso ele necessite arredondar o valor ou manter a precisão?
```text
    Pode usar a biblioteca "math.h" para usar funções de arredondamento. Para arredondar o "2.97", poderia usar a função "round", que arredondaria para o valor inteiro mais próximo.
```