#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef int T;

typedef struct Node {
    struct Node *next;
    T value;
} Node;

typedef struct Queue {
    Node *prim;
    Node *ultim;
    int size;
} Queue;

Queue *init_queue() {
    /* 
     * TODO
     * Aloca o noua coada si o intoarce.
     */
}

int isEmpty(Queue *queue) {
   /* 
     * TODO
     * Verifica daca coada este goala.
     * Intoarce 1 daca este goala iar 0 altfel.
     */
}

void enqueue(Queue *queue, T data) {
    /* 
     * TODO
     * Adauga un nou element in coada.
     * Aveti in vedere cazul cand coada este goala.
     */
}

T dequeue(Queue *queue) {
    /* 
     * TODO
     * Scoate primul element adaugat in coada si intoarce valoare acestuia.
     * Aveti in vedere cazul cand coada este goala.
     */
}

T peek(Queue *queue) {
    /* 
     * TODO
     * Intoarce primul element adaugat in coada fara sa il scoata din aceasta.
     * Aveti in vedere cazul cand coada este goala.
     */
}

void print(Queue *queue) {
    /* 
     * TODO
     * Afiseaza continutul cozii.
     */
}

int main(){
}