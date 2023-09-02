#include <stdio.h>
#include <stdlib.h>
#define n 10

void print(int arr[], int h)
{
    for (int i = 0; i < h; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge(int arr[], int low, int mid, int high)
{

    int b[100], i, j, k;
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            b[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        b[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = arr[j];
        k++;
        j++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = b[i];
    }
}

void mergesort(int arr[], int low, int high)
{
    int mid;

    if (low < high)
    {

        mid = (low + high) / 2;

        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 99 + 1;

        
    }
    print(arr,n-1);
    printf("\n");
    mergesort(arr, 0, n - 1);
     print(arr,n-1);
}

   
