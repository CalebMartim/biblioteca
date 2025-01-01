### Point update, range query

Inicialização:

``SegTree<T> st(n);`` onde n é o tamanho do vetor desejado e T é o tipo dos elementos deste vetor (e.g. int, long long, etc).   

Uso:

``update(i, x);`` irá somar x ao elemento no índice i do vetor.

``query(l, r);`` retorna a soma de todos os elementos que estão no intervalo de índices [l, r] do vetor.

Complexidades:
- update: O(log(n))
- query: O(log(n))
 
Baseado em: https://codeforces.com/blog/entry/18051

Testado em: https://judge.yosupo.jp/submission/259417 [139 ms,	11.96 Mib]
