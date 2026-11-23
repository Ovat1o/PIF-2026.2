Questão 01.

a)
- Protótipo: "float celsius(float);" — avisa ao compilador, antes da "main()", que existe uma função com esse nome, qual tipo ela recebe e qual tipo ela retorna.
- Chamada: "c = celsius(f);" — executa a função passando o valor de "f" e guarda o resultado retornado em "c".
- Definição: "float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; }" — contém a implementação real da função, ou seja, o código que faz o cálculo.

b) O protótipo permite ao compilador conferir se a função está sendo chamada com a quantidade e os tipos certos de argumentos, além de saber o tipo do valor retornado. Se ele for omitido e a função ficar depois da "main()", o compilador não conhece a assinatura dela na hora da chamada, não consegue validar os parâmetros corretamente e pode gerar erro ou aviso de compilação (em versões antigas do C, ele até assumia retorno "int", causando resultado incorreto).

c) O tipo da função "celsius()" é "float". O tipo de uma função é sempre o tipo do valor que ela devolve, pois é esse dado que substitui a chamada da função dentro de uma expressão ou atribuição (como em "c = celsius(f);"), independente dos tipos dos parâmetros recebidos.
