#include<stdio.h>
int main()
{
    int x,i;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    printf("SQUARE OF FIRST %d NATURAL NUMBERR ARE: \n",x);
    for(i=1;i<=x;i++)
    {
        printf("%d\n",i*i);

    }
    return 0;
}