Questão 01.

a) O `while` testa a condição antes de executar o bloco. Por isso, pode não executar nenhuma vez. O `do-while` executa o bloco primeiro e testa a condição ao final, garantindo pelo menos uma execução.

b) O `for` é mais adequado quando a quantidade de repetições é conhecida ou quando inicialização, condição e atualização podem ficar reunidas no cabeçalho. O `while` é indicado quando a repetição depende de uma condição e não se sabe previamente quantas vezes ela ocorrerá. O `do-while` é útil quando o bloco precisa ser executado ao menos uma vez, como em menus e validações de entrada.

c) `while (condicao);` não é erro de compilação. O ponto e vírgula representa um corpo vazio, portanto é um erro de lógica quando não era essa a intenção. Se `condicao` permanecer verdadeira e não for alterada por outro meio, o programa ficará preso em um laço infinito sem executar nenhuma instrução útil.
