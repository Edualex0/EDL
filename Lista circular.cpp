#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0


typedef struct noLSECirc{
    int info;
    struct noLSECirc* prox;
} NoLSEC;

typedef struct descritor{
    NoLSEC* inicio;
    NoLSEC* fim;
    int qtd;
} Descritor;

Descritor* criarLista(){
    Descritor* aux;
    aux = (Descritor*) malloc (sizeof(Descritor));
    aux -> inicio = NULL;
    aux -> fim = NULL;
    aux -> qtd = 0;
    return aux;
}

int isEmpty(Descritor* l){
    if(l -> qtd == 0){
        return TRUE; // true
    }
    else{
        return FALSE; // false
    }
}
NoLSEC* criarNo(int valor) {
    NoLSEC* novo;
    novo = (NoLSEC*) malloc (sizeof(NoLSEC));
    novo -> info = valor;
    novo -> prox = NULL;
    return novo;
}
void inserirInicio(Descritor* l, int valor){



}

void inserirFim(Descritor* l, int valor){
    NoLSEC* novo;
    novo = criarNo(valor);
    if(isEmpty(l)== 1 ){  //caso lista vazia
        l -> inicio = novo;
        l -> fim = novo;
        l -> qtd = 1;
        l -> fim -> prox = l -> inicio; // aplica a circularidade
    }

    else{ // caso a lista não esteja vazia
        l-> fim -> prox = novo;
        l -> fim = novo;
        l-> qtd++;
        l -> fim -> prox = l -> inicio;
    }
}

void exibir(Descritor* l){
    NoLSEC * aux = l -> inicio;
    for(int i = 0; i < l -> qtd; i++){ // poderia ser (int i = 1; i <= l -> qtd; i++)
        printf("%d", aux -> info);
        aux = aux -> prox;
    }
    printf("\n");
}

int main() {
    Descritor* lista;
    lista = criarLista();

    return 0;
}