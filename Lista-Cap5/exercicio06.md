Questão 06.

a)
- "#include <stdio.h>": procura o cabeçalho nos diretórios padrão das bibliotecas do compilador. Usamos para bibliotecas da própria linguagem ou do sistema.
- '#include "areas.h"': procura primeiro na pasta do próprio projeto (e, se não achar, nos diretórios padrão). Usamos para arquivos de cabeçalho criados por nós.

b) O "#undef SOMA" remove a definição da macro "SOMA", fazendo com que ela deixe de existir a partir daquele ponto do código. A forma "#undef SOMA(x,y)" está incorreta porque o "#undef" aceita apenas o nome (identificador) da macro, sem a lista de parâmetros.

c) Será impressa a mensagem "Modo normal". Essa decisão é tomada na etapa de pré-processamento, antes mesmo da compilação. Nessa fase, o pré-processador avalia as diretivas, mantém apenas o trecho escolhido e remove todas as diretivas ("#ifdef", "#else", "#endif", "#define", etc.) do código que será compilado; por isso elas não aparecem no executável final.
