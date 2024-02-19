#include <stdio.h>
#include <stdlib.h>



typedef struct Node{
    int data;
    struct Node *link;
} Node;

int main(){

    struct Node* current1 = malloc(sizeof(struct Node));
    current1->data = 65;
    current1->link = NULL;
    
    struct Node* current = malloc(sizeof(struct Node));
    current->data = 85;
    current->link = current1;

    struct Node *head = malloc(sizeof(struct Node));
    head->data = 45;
    head->link = current;

    printf("%d", head->link->link->data);
    return 0;

}