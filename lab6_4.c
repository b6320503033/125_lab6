#include<stdio.h>

int main()
{
    int n,i,j,max=0,min,idmax=0,idmin=0,x;
    scanf("%d",&n);

    int a[n][2],k[n];

    for(i=1; i<=n; i++)
        k[i]=0;

    for(i=1; i<=n; i++)
        for(j=1; j<=2; j++)
            scanf("%d",&a[i][j]);

    for(x=1; x<=n; x++)
    {
        for(i=1; i<=n; i++)
            for(j=1; j<=2; j++)
            {

                if(a[i][j]==x)
                    k[x]+=1;

            }
    }
    /*for(i=1; i<=n; i++)
        printf("%d\n",k[i]);*/

    for(i=1; i<=n; i++)
    {
        if(k[i]>max)
        {
            max=k[i];
            idmax=i;
        }
    }
    min=max;
    for(i=1; i<=n; i++)
    {
        if(k[i]<min)
        {
            min=k[i];
            idmin=i;
        }
    }
    printf("%d %d",idmax,idmin);

    return 0;
}
