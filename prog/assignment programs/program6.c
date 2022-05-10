#include <stdio.h>

void main()
{
    int a,b,*p1,*p2;
    int sum,diff,prod,quot,mod;

    printf("\nEnter any two numbers : \n");
    scanf("%d%d",&a,&b);

    p1=&a;
    p2=&b;

    sum = *p1 + *p2;
    diff = *p1 - *p2;
    prod = (*p1) * (*p2);
    quot = *p1 / *p2;
    mod = *p1 % *p2;

    printf("Sum = %d\n",sum);
    printf("Difference = %d\n",diff);
    printf("Product = %d\n",prod);
    printf("Quotient = %d\n",quot);
    printf("Mod = %d\n",mod);
}

