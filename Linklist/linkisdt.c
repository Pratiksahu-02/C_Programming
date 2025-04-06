#include<stdio.h>
#include<stdlib.h>

struct linkisdt
{
    int data;
    struct linkisdt *next;
};
typedef struct linkisdt *linklist;

//create a node
linklist create(int x)
{
    linklist p = (linklist)malloc(sizeof(struct linkisdt));
    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    p->data = x;
    p->next = NULL;
    return p;
}

//insert a node at the end of the list
linklist insert(linklist head, int x)
{
    linklist p = create(x);
    if (head == NULL)
    {
        return p;
    }
    linklist temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    return head;
}

//display the list
void display(linklist head)
{
    linklist temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

//delete a node from the list
linklist delete(linklist head, int x)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == x)
    {
        linklist temp = head->next;
        free(head);
        return temp;
    }
    linklist current = head;
    while (current->next != NULL && current->next->data != x)
    {
        current = current->next;
    }
    if (current->next != NULL)
    {
        linklist temp = current->next;
        current->next = temp->next;
        free(temp);
    }
    return head;
}

//search for a node in the list
linklist search(linklist head, int x)
{
    linklist temp = head;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

//enter a node at the beginning of the list
linklist enter(linklist head, int x)
{
    linklist p = create(x);
    p->next = head;
    return p;
}
//enter a node at the given position in the list
linklist enterat(linklist head, int x, int pos)
{
    linklist p = create(x);
    if (pos == 0)
    {
        p->next = head;
        return p;
    }
    linklist temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp != NULL)
    {
        p->next = temp->next;
        temp->next = p;
    }
    return head;
}

int main()
{
    linklist head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    display(head);
    head = delete(head, 2);
    display(head);
    linklist found = search(head, 3);
    if (found != NULL)
    {
        printf("Found: %d\n", found->data);
    }
    else
    {
        printf("Not Found\n");
    }
    head = enter(head, 0);
    display(head);
    head = enterat(head, 4, 2);
    display(head);
    return 0;
}