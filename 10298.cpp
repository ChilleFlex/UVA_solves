#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
int main()
{
    while(1)
    {
        string a;
        cin>>a;
        if(a[0]=='.')
            return 0;
        int i,j,k,ans;
        rep(i,a.size())
        {
            if(a.size()%i==0)
            {
                bool chk=true;
                int len=a.size()/i;
                rep0(j,i)
                {
                    for(k=j+i;k<a.size();k+=i)
                    {
                        if(a[j]!=a[k])
                        {
                            chk=false;
                            break;
                        }
                    }
                }
                if(chk)
                {
                    ans=len;
                    break;
                }
            }
        }
        pf("%d\n",ans);
    }
}
