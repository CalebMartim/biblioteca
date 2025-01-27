### Dinitz

Inicialização:

``Graoh<T> g(n);`` onde n é o tamanho do vértices no seu grafo e T é o tipo da dos valores no fluxo (int, long long, etc..    

Uso:

``g.addEdge(u, v, c);`` cria uma aresta do vértice u para o vértice v com capacidade de fluxo c

``g.dinitz(u, v);`` retorna o fluxo máximo entre o vértice u e o vértice v.
 
Baseado em: https://usaco.guide/adv/max-flow?lang=cpp e https://cp-algorithms.com/graph/dinic.html 

Testado em: https://cses.fi/problemset/result/11886346/ [630 ms]

