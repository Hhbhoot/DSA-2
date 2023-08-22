#include<stdio.h>
#define m 5

int search(int arr[],int n)
{
    int ft , lt ,mid ;
    ft = 0 ;
    lt = m - 1 ;
    
    for(int i = 0 ; i<m ; i++)
    {
        mid = (ft + lt)/2;

        if(arr[mid]==n)
        {
            return mid ;
        }
        else if(arr[mid]> n)
        {
            lt = mid -1 - m -1 ;
        }
        else if(arr[mid] < n)
        {
            ft = mid + 1 ;
        }
    }

    return -1 ;


}
int main(){
    int n ;
    int arr[m];
     
    printf("Please Enter Data in Ascending Order :\n");
    
    for(int i= 0 ; i<m ; i++)
    {
         printf("Enter value of arr[%d]",i);
        scanf("%d",&arr[i]);
 
    }    
      printf("Search here your element : ");
      scanf("%d",&n);   

      int y = search(arr,n);  

      if(y>=0)
      {
        printf("Your Data Matched... ");
      }
      else{
        printf("Data Not Matched.. ");
      }
    
}