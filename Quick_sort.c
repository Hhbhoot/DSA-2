#include <stdio.h>
#include <stdlib.h>
#define n 10
int arr[n];

int print(int arr[])
{
        for(int  i =0  ; i < n  ; i++)
    {
        printf("%d ",arr[i]);
    }
}
int quicksort(int arr[], int l, int h)
{
    int pivot, temp, i, j;
    if (l < h)
    {
         print(arr);
        printf("\n");

        i = l;
        j = h;
        pivot = l;
        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i < h)
            {
                i++;
            }
            while (arr[j] > arr[pivot])
            {
                j--;
            }
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
    

    
    quicksort(arr, l, j-1);
    quicksort(arr, j + 1, h);
    }
      
}

int main()
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % 99) + 1;

        printf("%d ", arr[i]);
    }
    printf("\n");
    quicksort(arr, 0, n - 1);


     for (int i = 0; i < n; i++)
     {
         printf("%d ", arr[i]);
     }
}