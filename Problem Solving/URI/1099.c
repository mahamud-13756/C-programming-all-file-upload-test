#include<stdio.h>
int main()
{
    int N,X,Y,i,j,sum=0;

    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        scanf("%d %d",&X,&Y);

        for(j=X+1; j<Y; j++)
        {
            if(j%2==1)
            {
               sum=sum+j;
            }
        }
        printf("%d\n",sum);
    }


    return 0;
}
