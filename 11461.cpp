#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int a,b,c,d,ans;
    float f;

    while(scanf("%d%d",&a,&b)==2 && (a!=0 || b!=0))
    {
        f=sqrt(a);
        c=sqrt(a);
        d=sqrt(b);
        ans=d-c;
        if(f==c)
            ans++;
        cout<<ans<<endl;
    }

}
