#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
const int MAX=100000000;
const int LMT=10000;
int flag[MAX>>6];
#define chkbit(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define setbit(x) (flag[x>>6]|=(1<<((x>>1)&31)))
vector<int>primes;
bool prime(int n)
{
    return (n&1 && n!=1 && !chkbit(n)) || n==2;
}
void sieve()
{
    long long int i,j,k;
    for(i=3;i<LMT;i+=2)
    {
        if(!chkbit(i))
        {
            for(j=i*i,k=i<<1;j<MAX;j+=k)
                setbit(j);
        }
    }
    primes.pb(2);
    for(i=3;i<=N;i+=2)
    {
        if(prime(i))
            primes.pb(i);
    }
}
void goldbach(int n)
{
    int i,j;
    rep0(i,sz(primes))
    {
        if(prime(n-primes[i]))
        {
            pf("%d %d\n",primes[i],n-primes[i]);
            return;
        }
    }
}
int main()
{
    sieve();
    int n;
    while(~sf(n))
    {
        if(n<8)
        {
            puts("Impossible.");
            continue;
        }
        if(n&1)
        {
            pf("2 3 ");
            goldbach(n-5);
        }
        else
        {
            pf("2 2 ");
            goldbach(n-4);
        }
    }
}
