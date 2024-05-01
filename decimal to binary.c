/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int n,r,c,d=0,base=1;
  printf("enter binary number = ");
  scanf("%d", &n);
  while(n>0)
  {
      r=n%10;
      d=d+r*base;
      n=n/10;
      base=base*2;
      
  }
  printf("decimal number = %d",d);

    return 0;
}
