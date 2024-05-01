// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i, j, k;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=i;j<=5;j++)
        {
           printf("* "); 
        }
        printf("\n");
    }
    for(i=5-1;i>=1;i--)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=i;j<=5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
	}

	



* * * * * 
 * * * * 
  * * * 
   * * 
    * 
   * * 
  * * * 
 * * * * 
* * * * * 