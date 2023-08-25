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
    else if (r >= n - 1)
    {
        printf("Queue is Full...\n");
    }
    else
    {
        r++;

        arr[r] = val;
    }
}
int deleteend()
{
    if (f < 0)
    {
        printf("Queue is Empty...");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}
int fisrtinsert(int val)
{
    if (r < 0)
    {
        r = f = 0;
        arr[r] = val;
    }
    else if (r >= n - 1)
    {
        printf("Queue is Full..\n");
    }
    else if(f > 0)
    
    {

        f = 0;
        arr[f] = val;
        
    }

    else{

        printf("Position is filled..\n");
        
    }
}
int lastdel()
{
    if (f < 0)
    {
        printf("Queue is Empty..\n");
    }
    else if (r == f)
    {

        r = f = -1;
    }
    else
    {
        r--;
    }
}

int display()
{
    if (f < 0)
    {
        printf("Queue is Empty...");
    }
    else
    {
        for (int i = f; i <= r; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}
int main()
{
   fisrtinsert(50);
   insert(100);
   deleteend();
   fisrtinsert(1);
   insert(20);
   insert(20);
   deleteend();
//    insert(20);
   fisrtinsert(10);
   
   
   


//    lastdel();
   display();   
}
    
