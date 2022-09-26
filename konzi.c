#include<stdio.h>
int rec_fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    return n * rec_fact(n-1);
}
int int_fact(int n)
{
    int result=1;
 for (int i=2;i<=n;++i)
 {
    result *=i;
 }      
 return result;
}
int main()
{

    printf("%i" "%i",int_fact(5) rec_fact(5));
}