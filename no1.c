// Tugas Pendahuluan 7 - Stack, Queue, Tree
// Bagian 1:
// Buatlah program dalam C yang dapat mengimplementasikan operasi
// push dan pop dalam sebuah stack

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Stack{
    int N;
    struct Stack * NextStack;
}; typedef struct Stack node; typedef node *pointer;

void push(pointer *top, int n){
    pointer temp;
    temp = malloc(sizeof(node));

    if(temp != NULL){
        temp->N = n;
        temp->NextStack = *top;
        *top = temp;
    }
    else{
        printf("Memory ERROR!\n");
    }
}

void pop(pointer *top){
    pointer temp;
    int pop;
    if(*top != NULL){
        temp = *top;
         pop = (*top)->N;
        *top = (*top)->NextStack;
        free(temp);
    }
    else
        printf("Empty.\n");
}

void printStack(pointer top){
    printf("\n");
    while(top != NULL){
        printf("%d\n", top->N);
        top = top->NextStack;
    }
    printf("\n");
}

int main(void){
    system("clear");

    pointer ptr = NULL;

    int counter, bnyk_data;
    int N;
    char *pilihan[] = {"PUSH", "POP"};
    char userinput[5];

    scanf("%d", &bnyk_data);

    counter = 0;
    while(counter < bnyk_data){

        scanf("%s", userinput);
        // User mengetikkan PUSH
        if(strcmp(pilihan[0], userinput) == 0){
            scanf("%d", &N);
            push(&ptr, N);
            counter++;
        }
        // User mengetikkan POP
        else if(strcmp(pilihan[1], userinput) == 0){
            pop(&ptr);
            counter++;
        }
        // User mengetikkan selain PUSH atau POP
        else{
            printf("Input yang dimasukkan invalid!\n");
        }

    }

    printStack(ptr);

}





