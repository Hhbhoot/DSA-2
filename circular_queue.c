#include <stdio.h>
#define n 5
int arr[n];
int f = -1, r = -1;
int insert(int val)
{
    if (r < 0)
    {
        f = r = 0;
        arr[r] = val;
    }
    else if ((r + 1) % n == f)
    {

        printf("Queue is Full..\n");
    }
    else
    {
        r = (r + 1) % n;

        arr[r] = val;
    }
}

int delete()
{
    if (f < 0)
    {
        printf("Queue is Empty..\n");
    }
    else if (f == r)
    {
        f = r = -1;
    }

    else
    {

        f = (f + 1) % n;
    }
}

int display()
{
    
    if (f < 0)
    {
        printf("Queue is Empty...\n");
    }
    else
    {
        do
        {
            printf("%d ", arr[f]);

            f= (f + 1) % n;
        } while (f != (r + 1) % n);
    }
}

int main()
{
    int ch, val;
    do{

    printf("1.Insert Value..\n");
    printf("2.Delete Value..\n");
    printf("3.Display\n");

    printf("\nEnter Your Choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Enter Value :");
        scanf("%d", &val);
        printf("\n");
        insert(val);

        break;

    case 2:
        delete ();
        break;

    case 3:
        display();
        break;

    default:
        printf("Invalid Input.....Please Enter Input Again\n");

        break;
    }
    }while(ch != 3);
}
