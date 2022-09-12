#include <stdio.h>

int main ( )
{
    int z=3;
    char name[100];
    printf("%s","Adja meg a nevét:");
    scanf("%s\n",name);
    for(int i=0; i < z;++i)    
    {
       printf("Hello, %s\n", name); 
    }
    
    


   
}    