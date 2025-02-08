### Point update, range query

Inicialização:

``SegTree<T> st(n);`` onde n é o tamanho do vetor desejado e T é o tipo dos elementos deste vetor (e.g. int, long long, etc).   

Uso:

``update(i, x);`` irá somar x ao elemento no índice i do vetor.

``query(a, b);``retorna a soma dos elementos com índices em [a, b] no vetor.
 
Complexidades:
- update: O(log(n))
- query: O(log(n))
 
Baseado em: https://codeforces.com/blog/entry/18051

Testado em: https://judge.yosupo.jp/submission/259417 [139 ms,	11.96 Mib]

### Range update, range query

Inicialização:

``LazySegTree<T> st(n);`` onde n é o tamanho do vetor desejado e T é o tipo dos elementos deste vetor (e.g. int, long long, etc).   

Uso:

``update(a, b, x);`` irá somar x em todos os elementos com índices em [a, b] no vetor.

``query(a, b);`` retorna a soma dos elementos com índices em [a, b] no vetor.

Complexidades:
- update: O(log(n))
- query: O(log(n))
 
Testado em: https://cses.fi/problemset/result/12022087/ [410 ms]
