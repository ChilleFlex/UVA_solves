#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;
int gcd(int a,int b,int &x,int &y)
{
    if(a==0)
    {
        x=0;
        y=1;
        return b;
    }
    int xx,yy;
    int d=gcd(b%a,a,xx,yy);
    x=yy-(b/a)*xx;
    y=xx;
    return d;
}
int main()
{
    int a,b,x,y,p;
    while(sff(a,b)!=EOF)
    {
        p=gcd(a,b,x,y);
        if(a==b)
        {
            x=0;
            y=1;
        }
        pf("%d %d %d\n",x,y,p);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
© 2021 GitHub, I
