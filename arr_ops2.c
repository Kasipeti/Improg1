#include <stdio.h>
#include <stdlib.h>

struct Mark_With_Weight
{
int mark;
int weight;
};

void dump_arr(int* arr, int size)
{
    char result[100];
    int len=0;
    result [len++]='[';
   
    for (int i=0;i<size;++i)
    {
        if (i==0) 
        {    
            result[len++] = arr[i]+'0';
        }   
        else   
        {
            result[len++]=','; 
           result[len++] = arr[i]+'0';
        }   
    }
   result[len++]=']';
   result[len++]='\0';
   printf("%s",result);
}

int main()
{
    mark Mark_With_Weight arr[5];
    arr[0].mark=2
    arr[0].weight=5
    arr[0].mark=2
    arr[0].weight=5
    arr[0].mark=2
    arr[0].weight=5
    arr[0].mark=2
    arr[0].weight=5
    arr[0].mark=2
    arr[0].weight=5
    

    int sum=0;
    for(int i=0;i<ar_len;++i)
    {

        sum+=arr[i]*weights [i];
    }
   
    dump_arr(arr,ar_len);
    dump_arr(weights,weights_len);
}
