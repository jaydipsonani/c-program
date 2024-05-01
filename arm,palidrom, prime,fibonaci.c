
#include <stdio.h>
#include <string.h>

int main()
{
  
    //fibonnaci serias
    int n,s,r, sum=0,t, i, c, a=0, b=1;
    printf("enter n = ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++)
    {
            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
            
    }
============================================================    

    //palindrome number
    printf("\n\n");
    printf("enter palindrome number = ");
    scanf("%d", &s);
    t=s;
    while(s>0)
    {
        r=s%10;
        sum = r+(sum*10);
        s=s/10;
    }
    if(sum==t)
    {
        printf("this number is palindrome");
    }else
    {
        printf("not palindrome");
    }
===============================================================
    
    //armstrong number
    printf("\n\n");
    int x,y, arm=0,z;
    printf("enter armstrong number = ");
    scanf("%d", &x);
    y=x;
    while(x>0)
    {
        z=x%10;
        arm = arm+(z*z*z);
        x=x/10;
    }
    if(y==arm)
    {
        printf("this number is armstrong");
    }else
    {
        printf("this number is not armstrong");
    }
    
================================================================
    //prime number
    printf("\n\n");
    int p, q, count = 0;
    printf("enter prime number = ");
    scanf("%d",&p);
    for(q=1;q<=p;q++)
    {
        if(p%q==0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("this is prime number");
    }
    else{
        printf("this is not prime number");
    }

    return 0;
}
