#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,q,k,s,i,j,f,b,z,e;

    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&n);
    int a[50]={0};
    i=0;z=0;
    n=n-1;
    if(n==0)
    {
        printf("0\n");
    }
    else
    {
    while(n!=0)
    {
        f=n%5;
        n=n/5;
        a[i]=f;
        i++;

    }
    for(j=i;j>=0;j--)
    {
        if(a[j]==0)
        {
            for(k=j+1;k<=i;k++)
            {
                if(a[k]!=0)
                {
                   z=1;
                   break;
                }
                else
                {

                    z=0;
                }

            }
             if(z==1)
                {
                    printf("%d",a[j]);
                }

        }
        else
        {

        printf("%d",2*a[j]);
        }
    }
    printf("\n");
    }
    }

    return 0;
}

