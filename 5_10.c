#include<stdio.h>
int main()
{
    int x,i;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    printf("TABLE OF %d IS: \n",x);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d \n",x,i,x*i);

    }
    return 0;
}