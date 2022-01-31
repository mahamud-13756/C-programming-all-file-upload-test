// Presentation error

#include<stdio.h>
int main()
{
    int X,Y,n;
    scanf("%d %d",&X,&Y);
    for(n=1;n<=Y;n++)
    {
        printf("%d ",n);
        if(n%X==0)
        {
            printf("%d\n",n);
        }

    }


    return 0;
}

