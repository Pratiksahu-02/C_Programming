#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;

void insert(int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}

void display()
{
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void freeList()
{
    struct node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    tail = NULL;
}

int main()
{
    int choice, value;

    do
    {
        printf("\n1. Insert\n2. Display\n3. Exit\nEnter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch (choice)
        {
            case 1:
                printf("Enter value to insert: ");
                if (scanf("%d", &value) != 1) {
                    printf("Invalid input! Please enter a number.\n");
                    while (getchar() != '\n'); // Clear input buffer
                    break;
                }
                insert(value);
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Freeing memory and exiting...\n");
                freeList();
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}