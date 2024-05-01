/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, j,k;
    for(i=1;i<=5;i++)
    {
        for(k=5;k>i;k--)
        {
            printf(" ");
        }
       for(j=1;j<=i;j++)
       {
           if(j==1|| j==i|| i==5)
           {
               printf("* ");
           }else
           {
               printf("  ");
           }
       }
       printf("\n");
    }
    
    
    return 0;
}




    * 
   * * 
  *   * 
 *     * 
* * * * *