Questão 04.

a)
- Caso base: "n == 0", que retorna "1" e interrompe as chamadas recursivas.
- Passo recursivo: "(long)n * fatorial(n - 1)", que reduz o problema chamando a própria função com "n - 1".

Se o caso base fosse removido, a função continuaria chamando a si mesma infinitamente ("0", "-1", "-2", ...), sem condição de parada, até o programa travar por falta de memória na pilha.

b) Rastreamento de "fatorial(4)":

Empilhamento (chamadas):
```text
fatorial(4) -> precisa de 4 * fatorial(3)
fatorial(3) -> precisa de 3 * fatorial(2)
fatorial(2) -> precisa de 2 * fatorial(1)
fatorial(1) -> precisa de 1 * fatorial(0)
fatorial(0) -> atinge o caso base e retorna 1
```

Desempilhamento (retornos):
```text
fatorial(0) retorna 1
fatorial(1) retorna 1 * 1 = 1
fatorial(2) retorna 2 * 1 = 2
fatorial(3) retorna 3 * 2 = 6
fatorial(4) retorna 4 * 6 = 24
```

c) A cada chamada recursiva, o programa guarda um novo bloco na pilha de execução (com os parâmetros, variáveis locais e o endereço de retorno daquela chamada). Esse espaço só é liberado quando a função retorna. Sem um caso base, novas chamadas são empilhadas sem parar até esgotar o limite da pilha, causando estouro de pilha (stack overflow) e encerrando o programa com erro.
