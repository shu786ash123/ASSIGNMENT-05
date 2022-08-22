#include<stdio.h>
int main()
{
    int x,i=1;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    printf(" FIRST %d NATURAL NUMBERS ARE: \n",x);
    for(i;i<=x;i++)
    {
        printf("%d\n",i);

    }
    return 0;

}