#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
bool mark[N];
void sieve()
{
    int i,j;
    memset(mark,true,sizeof(mark));
    for(i=4;i<N;i+=2)
        mark[i]=false;

    for(i=3;i*i<N;i++)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
    mark[1]=false;
}
int main()
{
    int n,ara[N];
    mem(ara);
    sieve();
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        if(ara[n]!=-1)
        {
            pf("%d\n",ara[n]);
            continue;
        }
        int i,j,sum=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(mark[i])
                {
                    if(j%i==0)
                        sum+=i;
                    else
                        sum++;
                }
                else
                {
                    if(mark[j])
                        sum++;
                    else
                        sum+=__gcd(i,j);
                }
            }
        }
        pf("%d\n",sum);
        ara[n]=sum;
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
