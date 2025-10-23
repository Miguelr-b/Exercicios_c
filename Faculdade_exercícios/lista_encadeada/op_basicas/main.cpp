#include "lista.h"
#include <stdio.h>


int main()
{
    Listas *lista = NULL;  

    int num, op;

    do{

        printf("\n\n1 - Inserir numero no fim da lista");
        printf("\n2 - Remover da lista");
        printf("\n3 - Imprimir lista");
        printf("\n4 - Procurar numero");
        printf("\n5 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            printf("Valor para inserir: ");
            scanf("%d", &num);
            inserir_fim(num, lista);
        }
        else if(op == 2)
        {
            printf("Valor para remover: ");
            scanf("%d", &num);
            remover(num, lista);
        }
        else if(op == 3)
        {
            imprimir(lista);

        }
        else if(op == 4)
        {
            printf("Valor para procurar: ");
            scanf("%d", &num);
            procurar_valor(num, lista);

        }
    }while(op != 5);

    /*apagar toda a lista encadeada alocada dinamicamente*/
    desalocar(lista);


    printf("Ponteiro apos desalocar a lista: %p\n", lista);

    return 0;
}
