// Tugas Pendahuluan 7 - Stack, Queue, Tree
// Bagian 3:
// Buatlah program dalam C yang dapat melakukan traversal
// DFS (Depth-First Search) secara inorder dalam sebuah 
// Binary Search Tree

#include<stdio.h>
#include<stdlib.h>

struct BST{
    int N;
    struct BST * left;
    struct BST * right;
}; typedef struct BST DFSinorder; typedef DFSinorder* pointer;

void insert(pointer * tree, int n){
    if(*tree == NULL){
        *tree = malloc(sizeof(DFSinorder));
        if(*tree != NULL){
            (*tree)->N = n;
            (*tree)->left = NULL;
            (*tree)->right = NULL;
        }
        else{
            printf("Memory ERROR!\n");
        }
    }
    else{
        if(n < (*tree)->N)
            insert(&((*tree)->left), n);
        else if(n > (*tree)->N)
            insert(&((*tree)->right), n);
        else
            printf("Data sudah ada\n");
    }
}

void InOrder(pointer tree){
    // printf("\n");
    if(tree != NULL){
        InOrder(tree->left);
        printf("%d ", tree->N);
        InOrder(tree->right);
    }
    // printf("\n");
}

int main(void){
    system("clear");
    int counter, bnyk_data, N;

    pointer main = NULL;

    scanf("%d", &bnyk_data);

    for(counter = 0; counter < bnyk_data; counter++){
        scanf("%d", &N);
        insert(&main, N);
    }

    printf("\n");
    InOrder(main);
    printf("\n\n");

}
