#include<stdio.h>

int main()
{
    int t,n,i,g,f,l;
    scanf("%d",&t);
    while(t--)
    {
        f=0;l=0;
        scanf("%d",&n);
        for(i=0;n;i++)
        {
            if(i==0)
            {
                f=n%10;n/=10;
            }
            else
            {
                g=n%10;n/=10;
                if(n==0)l=g;
            }
        }
        printf("%d\n",f+l);
    }



    return 0;
}
