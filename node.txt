#include <stdio.h>
#include <stdlib.h>



typedef struct Node{
    int data;
    struct Node *link;
} Node;

int main(){
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 45;
    head->link = 1000;

    struct Node *current = malloc(sizeof(struct Node));
    current->data = 65;
    current->link = 2000;
    
    current = malloc(sizeof(struct Node));
    current->data = 85;
    current->link = 3000;

    head->link->link;
    return 0;

}