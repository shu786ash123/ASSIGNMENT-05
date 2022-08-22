#include<stdio.h>
int main()
{
    int x,i;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    printf(" FIRST %d EVEN NATURAL NUMBERS IN ARE: \n",x);
    for(i=1;i<=x;i++)
    {
        printf("%d\n",2*i);

    }
    return 0;
}
