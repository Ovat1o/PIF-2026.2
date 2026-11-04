Questão 04.

a) Saída no terminal:

```text
Prata
Ouro
```

Como a variável `codigo` vale 2, a execução vai direto para o `case 2` e imprime "Prata". Como não há um `break` nesse bloco, o programa continua descendo e executa também o `case 3`, imprimindo "Ouro". A execução só é interrompida quando encontra o `break` do `case 3`.

b) O `break` serve para finalizar o `switch` e sair dele assim que o caso for atendido. Quando o `break` é esquecido ou omitido, o código continua executando os casos seguintes automaticamente; esse efeito é chamado de *fall-through*.

c) Apenas tipos inteiros (como `int`, `char`, `short`, `long` ou enumerações). Não é permitido usar `float` nem `double`, porque números de ponto flutuante têm imprecisões de arredondamento na memória, impedindo comparações exatas de igualdade.
