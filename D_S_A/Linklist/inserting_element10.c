#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};struct Node* head = NULL;

void insert(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    struct Node** current = &head;
    while (*current != NULL) {
        current = &((*current)->next);
    }
    *current = newNode;
}


int main() {
    int n, data;
    printf("Enter the number of elements to insert: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter element");
        scanf("%d", &data);
        insert(data);
    }

    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}

