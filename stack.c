#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef int T;

typedef struct Node {
    struct Node *next;
    T value;
} Node;

typedef struct Stack {
    Node *head;
    int size;
} Stack;

Stack *init_stack() {
    /* 
     * TODO
     * Aloca o noua stiva si o intoarce.
     */
}

int isEmpty(Stack *stack) {
    /* 
     * TODO
     * Verifica daca stiva este goala.
     * Intoarce 1 daca este goala iar 0 altfel.
     */
}
void push(Stack *stack, T data) {
    /* 
     * TODO
     * Adauga un nou element in stiva.
     * Aveti in vedere cazul cand stiva este goala.
     */
}

T pop(Stack *stack) {
    /* 
     * TODO
     * Scoate ultimul element adaugat in stiva si intoarce valoare acestuia.
     * Aveti in vedere cazul cand stiva este goala.
     */
}

T peek(Stack *stack) {
    /* 
     * TODO
     * Intoarce ultimul element adaugat in stiva fara sa il scoata din aceasta.
     * Aveti in vedere cazul cand stiva este goala.
     */
}

void print(Stack *stack) {
    /* 
     * TODO
     * Afiseaza continutul stivei.
     */
}

int main() {
    return 0;
}
