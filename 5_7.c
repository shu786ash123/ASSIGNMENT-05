#include<stdio.h>
int main()
{
    int x,i;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    printf(" FIRST %d EVEN NATURAL NUMBERS IN REVERSE ORDER ARE: \n",x);
    for(i=x;i>=1;i--)
    {
        printf("%d\n",2*i);

    }
    return 0;
}