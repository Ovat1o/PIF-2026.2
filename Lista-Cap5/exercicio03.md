Questão 03.

a)
- "void exibe_mensagem(char* msg);": recebe parâmetro de entrada ("char*") e não possui valor de retorno ("void").
- "int obter_codigo(void);": não recebe parâmetros de entrada ("void") e possui valor de retorno ("int").
- "void limpar_tela(void);": não recebe parâmetros de entrada ("void") e não possui valor de retorno ("void").

b) Uma função com retorno calcula e devolve um valor para quem a chamou, podendo ser usada em atribuições e expressões (ex.: calcular a média de notas ou o fatorial de um número). Já um procedimento ("void") apenas executa uma ação sem devolver resultado (ex.: exibir um menu ou limpar a tela).

c) Não é válida. A função "limpar_tela()" é do tipo "void", ou seja, não devolve nenhum valor. Tentar atribuir o resultado dela à variável "x" gera um erro de compilação.
