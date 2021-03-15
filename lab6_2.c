#include<stdio.h>
int main()
{
    int n,i,k=0,a,g,x,y;
    scanf("%d",&n);

    if(n>=4&&n<=9);

    scanf("%d",&a);
    scanf("%d",&g);

    while(a!=0&&n!=0)
    {
        x=a%10;
        y=g%10;
        if(x==y){
            k++;
        }
        a=a/10;
        g=g/10;
    }

    printf("%d %d",k,n-k);



    return 0;

}
