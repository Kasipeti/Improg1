#include<stdio.h>
int main()
{
    int arr[]={1,8,2,1,4,8,5,3,7,11};
    int n=sizeof(arr) / sizeof(arr[0]);
    for (int i=0; i < 11; i++)
    {
        if (5 <arr[i] && arr[i]<10)
        {
            printf("%i ", arr[i]);
           
        }
        else  
        {}
    }

}