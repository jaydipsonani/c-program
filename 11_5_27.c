/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int i,j,k;
   for(i=5;i>=1;i--)
   {
       for(j=1;j<=5;j++)
       {
           if(j<=i){
           printf("%d ",j);
           }else
           {
               printf("  ");
           }
       }
    for(j=4;j>=1;j--)
       {
           
          if(j<=i){
           printf("%d ",j);
          }else
          {
              printf("  ");
          }
       }
       printf("\n");
   }
   
    for(i=2;i<=5;i++)
   {
       for(j=1;j<=4;j++)
       {
           if(j<=i){
           printf("%d ",j);
           }else
           {
               printf("  ");
           }
       }
    for(j=5;j>=1;j--)
       {
          if(j<=i){
           printf("%d ",j);
          }else
          {
              printf("  ");
          }
       }
       printf("\n");
   }
   
    return 0;
}





1 2 3 4 5 4 3 2 1 
1 2 3 4   4 3 2 1 
1 2 3       3 2 1 
1 2           2 1 
1               1 
1 2           2 1 
1 2 3       3 2 1 
1 2 3 4   4 3 2 1 
1 2 3 4 5 4 3 2 1 


































