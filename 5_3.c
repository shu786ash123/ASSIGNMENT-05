#include<stdio.h>
int main()
{
    int x,i;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    printf(" FIRST %d NATURAL NUMBERS IN  REVERSE ORDER ARE: \n",x);
    for(i=x;i>=1;i--)
    {
        printf("%d\n",i);

    }
    return 0;

}