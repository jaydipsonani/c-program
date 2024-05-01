
#include <stdio.h>
#include <string.h>

int main()
{
  
    // leap year
    int n;
    printf("enter leap year = ");
    scanf("%d",&n);
    if(n%400==0 || n%4==0 && n%100==0)
    {
        printf("this year is leap year");
        
    }else
    {
        printf("this year is not leap year");
    }

    return 0;
}
