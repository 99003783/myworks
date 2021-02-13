#include <stdio.h>
int a=0, b=0, res=0;
int main()
{
    
    printf("Enter two integers: "); 
    scanf("%d %d", &a, &b); 
    
    res=a+b;
    printf("  %d\n",a);
    printf("+");
    
    printf(" %d\n-----------\n  %d",b,res); 
    
    return 0;
}

