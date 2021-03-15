#include<stdio.h>
int main()
{
    int n,i,j;
    char c;
    scanf("%d",&n);
    if(n>=1&&n<=10000);
    fflush(stdin);
    char a[n][1000];

    for(i=0; i<n; i++)
        for(j=0; j<1000; j++)
        {
            scanf("%c",&a[i][j]);
            if(a[i][j]=='\n')
                break;
        }

    for(c='A'; c<='Z'; c++)
    {
        for(i=0; i<n; i++)
            if(a[i][0]==c)
            {
                for(j=0; j<1000; j++)
                {
                    printf("%c",a[i][j]);
                    if(a[i][j]=='\n')
                        break;

                }
            }
    }

   return 0;


}
