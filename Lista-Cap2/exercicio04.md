Questão 04.

Valores iniciais: `a = 1`, `b = 2`, `c = 3` e `d = 4`.

1. `a += b + c`
   - `a = 1 + 2 + 3 = 6`
   - Valores: `a = 6`, `b = 2`, `c = 3`, `d = 4`.

2. `b *= c = d + 2`
   - Primeiro, `c = 4 + 2 = 6`.
   - Depois, `b = 2 * 6 = 12`.
   - Valores: `a = 6`, `b = 12`, `c = 6`, `d = 4`.

3. `d %= a + a + a`
   - `d = 4 % (6 + 6 + 6) = 4 % 18 = 4`.
   - Valores: `a = 6`, `b = 12`, `c = 6`, `d = 4`.

4. `d -= c -= b -= a`
   - As atribuições são avaliadas da direita para a esquerda.
   - `b = 12 - 6 = 6`.
   - `c = 6 - 6 = 0`.
   - `d = 4 - 0 = 4`.
   - Valores: `a = 6`, `b = 6`, `c = 0`, `d = 4`.

5. `a += b += c += 7`
   - `c = 0 + 7 = 7`.
   - `b = 6 + 7 = 13`.
   - `a = 6 + 13 = 19`.

Valores finais: `a = 19`, `b = 13`, `c = 7` e `d = 4`.