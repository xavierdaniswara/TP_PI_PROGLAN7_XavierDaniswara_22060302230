// Tugas Pendahuluan 7 - Stack, Queue, Tree
// Bagian 4:
// Buatlah program dalam C yang dapat melakukan traversal
// BFS (Breadth-First Search) secara level-order dalam
// sebuah Binary Search Tree

#include<stdio.h>
#include<stdlib.h>

struct BST{
    int N;
    struct BST * left;
    struct BST * right;
}; typedef struct BST BFSinorder; typedef BFSinorder* pointer;

void insert(pointer * tree, int n){
    if(*tree == NULL){
        *tree = malloc(sizeof(BFSinorder));
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

void BreadthFirst(pointer tree, int define){
    pointer queue[define];
    int lefTree = 0;
    int righTree = 0;
    queue[righTree++] = tree;
    
    while(lefTree < righTree){
        pointer current = queue[lefTree++];
        printf("%d ", current->N);

        if(current->left != NULL)
            queue[righTree++] = current->left;
        if(current->right != NULL)
            queue[righTree++] = current->right;
    }
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
    BreadthFirst(main, bnyk_data);
    printf("\n\n");

}