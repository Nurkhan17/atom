#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void swap(struct Node* head, int x, int y) {
    if (x == y) {
        return;
    }

    struct Node *prevX = NULL, *currX = head;
    while (currX != NULL && currX->data != x) {
        prevX = currX;
        currX = currX->next;
    }

    struct Node *prevY = NULL, *currY = head;
    while (currY != NULL && currY->data != y) {
        prevY = currY;
        currY = currY->next;
    }
    if (currX == NULL || currY == NULL) {
        return;
    }
  
    if (prevX != NULL) {
        prevX->next = currY;
    } else {
        head = currY;
    }

    if (prevY != NULL) {
        prevY->next = currX;
    } else {
        head = currX;
    }

    struct Node* temp = currX->next;
    currX->next = currY->next;
    currY->next = temp;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
void push(struct Node** headRef, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *headRef;
    *headRef = newNode;
}

int main() {
    struct Node* head = NULL;
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    printList(head);

    swap(head, 2, 3);

    printList(head);

    return 0;
}