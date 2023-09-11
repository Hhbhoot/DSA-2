#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;

void FirstInsert(int val)
{
    struct node *ptr =head ;
    struct node *temp = malloc(sizeof(struct node));

    temp -> data = val ;
    
    while(ptr -> next != head)
    {
        ptr = ptr -> next ;
    }

    temp ->next = head ;
    temp -> prev = ptr ;
    head = temp ;
    


}

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        head->next = temp;
        head->prev = temp;

        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
    temp->next = head;
    head->prev = temp;
}

void Display()
{
    struct node *ptr = head;
    struct node *temp;

    if (head == NULL)
    {
        printf("Link is Empty..\n");
    }
    else
    {
        while (ptr->next != head)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
        printf("\n");
        ptr->next = temp;

        while (temp->prev != head->prev)
        {
            printf("%d ", temp->data);
            temp = temp->prev;
        }
        printf("%d ", temp->data);
    }
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);
    insertEnd(70);
    FirstInsert(2);
    Display();
}