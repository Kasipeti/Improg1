#include<stdio.h>
     int main()
    {
        for (int i=0;i<100;++i) 
            if (i%3 == 0 && i%5 == 0)
            {
                printf("%s \n","fizzbuzz");

            }  
            else if (i%3 ==0 )
            {  
                printf("%s \n","fizz");
            }
            else if(i%5 ==0)
            {
                printf("%s \n" ,"buzz");
            }
            else
            {

                 printf("%i \n",i);
            }   


    }
