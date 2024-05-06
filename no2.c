// Tugas Pendahuluan 7 - Stack, Queue, Tree
// Bagian 2:
// Buatlah program dalam C yang dapat mengimplementasikan operasi
// enqueue dan dequeue dalam sebuah queue

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Queue{
    int N;
    struct Queue * NewQueue;
}; typedef struct Queue node; typedef node *pointer;

void enqueue(pointer *top, pointer *bottom, int n){
    pointer temp;
    temp = malloc(sizeof(node));

    if(temp != NULL){
        temp->N = n;
        temp->NewQueue = NULL;
        if(*top == NULL)
            *top = temp;
        else
            (*bottom)->NewQueue = temp;
        *bottom = temp;
    }
    else{
        printf("Memory ERROR!\n");
    }
}

void dequeue(pointer *top, pointer *bottom){
    pointer temp;
    int dequeue;
    if(*top != NULL){
        temp = *top;
        dequeue = (*top)->N;
        *top = (*top)->NewQueue;
        if(*top == NULL)
            *bottom = NULL;
        free(temp);
    }
    else
        printf("Empty.\n");
}

void printQueue(pointer ptr){
    if(ptr != NULL){
        printf("\n");
        while(ptr != NULL){
            printf("%d ", ptr->N);
            ptr = ptr->NewQueue;
        }
        printf("\n\n");        
    }
    else
        printf("Queue kosong\n");

}

int main(void){
    system("clear");

    pointer head = NULL;
    pointer tail = NULL;

    int counter, bnyk_data;
    int N;
    char *pilihan[] = {"ENQUEUE", "DEQUEUE"};
    char userinput[8];

    scanf("%d", &bnyk_data);

    counter = 0;
    while(counter < bnyk_data){

        scanf("%s", userinput);
        // User mengetikkan ENQUEUE
        if(strcmp(pilihan[0], userinput) == 0){
            scanf("%d", &N);
            enqueue(&head, &tail, N);
            counter++;
        }
        // User mengetikkan DEQUEUE
        else if(strcmp(pilihan[1], userinput) == 0){
            dequeue(&head, &tail);
            counter++;
        }
        // User mengetikkan selain ENQUEUE atau DEQUEUE
        else{
            printf("Input yang dimasukkan invalid!\n");
        }

    }

    printQueue(head);

}
