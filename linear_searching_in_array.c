#include <stdio.h>
#include <stdlib.h>

int search(int arr[], int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {

            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter your size of array : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;

        printf("%d ", arr[i]);
    }

    printf("\n");

    int m;

    printf("Enter your Element to search : ");
    scanf("%d", &m);

    int y = search(arr, m, n);

    if (y >= 0)
    {
        printf("Data Matched....");
    }
    else
    {
        printf("Data Not Matched..");
    }
}