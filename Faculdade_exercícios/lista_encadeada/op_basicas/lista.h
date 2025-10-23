struct Listas {
    int valor;
    Listas *prox;
};

void desalocar(Listas* &lista);

void inserir_fim(int n, Listas* &lista);

void remover(int x, Listas* &lista);

void imprimir(Listas* lista);

void procurar_valor(int x, Listas* lista);

