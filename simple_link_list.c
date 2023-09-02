#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void InsertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}

void DeleteEnd()
{
    struct node *ptr = head;
    struct node *p;

    if (head == NULL)
    {
        printf("List Is Already Empty...\n");
    }
    else if (head->next == NULL)
    {
        head == NULL;
        printf("List is Empty...\n");
        free(ptr);
        return;
    }

    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}

int Display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List Is Empty...\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    int ch, val;
    do
    {
        printf("1.Insert End Function \n");
        printf("2.Delete End Function \n");
        printf("3.Dispaly List \n");
        printf("\n");
        printf("Enter Your Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Vlaue : ");
            scanf("%d", &val);
            InsertEnd(val);
            break;

        case 2:
            DeleteEnd();
            break;

        case 3:
            Display();
            break;

        default:

            printf("Wrong Choice Entered..Pls Enter Correct Choice..\n");
            break;
        }
    } while (ch != 3);
}