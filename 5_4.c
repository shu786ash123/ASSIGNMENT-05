#include<stdio.h>
int main()
{
    int x,i;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&x);
    printf(" FIRST %d ODD NATURAL NUMBERS  ARE: \n",x);
    for(i=1;i<=x;i++)
    {
        printf("%d\n",2*i-1);

    }
    return 0;

}