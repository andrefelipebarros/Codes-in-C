#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int prato;
    char nome[20];
} Prato;

typedef struct no {
    Prato p;
    struct no* proximo;
} No;

Prato registrarPrato() {
    Prato p;
    printf("\nDigite o nome e o número do prato:\n");
    scanf("%19s%d", p.nome, &p.prato);
    return p;
}

void imprimirPrato(Prato p) {
    printf("\nNome: %s\nPrato: %d\n", p.nome, p.prato);
}

No* empilhar(No* topo) {
    No* novo = malloc(sizeof(No));
    if (novo) {
        novo->p = registrarPrato();
        novo->proximo = NULL;

        if (topo == NULL) {
            // Se a pilha estiver vazia, o novo elemento se torna o topo
            return novo;
        } else if (novo->p.prato < topo->p.prato) {
            // Se o número do prato do novo elemento for menor que o do topo, o novo elemento se torna o novo topo
            novo->proximo = topo;
            return novo;
        } else {
            // Encontrar a posição correta para inserir o novo elemento
            No* atual = topo;
            while (atual->proximo != NULL && novo->p.prato > atual->proximo->p.prato) {
                atual = atual->proximo;
            }
            novo->proximo = atual->proximo;
            atual->proximo = novo;
            return topo;
        }
    } else {
        printf("\nErro ao alocar memória...\n");
        return topo;
    }
}

No* desempilhar(No* topo) {
    if (topo != NULL) {
        No* remover = topo;
        topo = topo->proximo;
        free(remover);
    } else {
        printf("\nPilha vazia!\n");
    }
    return topo;
}

void imprimirPilha(No* topo) {
    printf("\n----------- PILHA --------------\n");
    while (topo) {
        imprimirPrato(topo->p);
        topo = topo->proximo;
    }
    printf("\n--------- FIM PILHA ------------\n");
}

No* removerElemento(No* topo, int pratoRemover) {
    No* atual = topo;
    No* anterior = NULL;

    while (atual != NULL) {
        if (atual->p.prato == pratoRemover) {
            if (anterior == NULL) {
                topo = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            free(atual);
            printf("\nElemento removido com sucesso!\n");
            return topo;
        }
        anterior = atual;
        atual = atual->proximo;
    }

    printf("\nElemento não encontrado na pilha!\n");
    return topo;
}



int main() {
    No* topo = NULL;
    int opcao;

    do {
        printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n4 - Remover elemento\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                topo = empilhar(topo);
                break;
            case 2:
                topo = desempilhar(topo);
                printf("\nElemento removido com sucesso!\n");
                break;
            case 3:
                imprimirPilha(topo);
                break;
            case 4:
                printf("\nDigite o número do prato a ser removido:\n");
                int pratoRemover;
                scanf("%d", &pratoRemover);
                getchar();
                topo = removerElemento(topo, pratoRemover);
                break;
            default:
                if (opcao != 0) {
                    printf("\nOpcao invalida!!!\n");
                }
        }
    } while (opcao != 0);

    return 0;
}
