#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;
int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};
int n,m;
string a[N];
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m)
        return true;
    return false;
}
int main()
{
    int i,tc=1,j,k;
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            return 0;
        rep0(i,n)
            cin>>a[i];
        if(tc>1)
            puts("");
        rep0(i,n)
        {
           rep0(j,m)
            {
                if(a[i][j]=='.')
                {
                    int cnt=0;
                    rep0(k,8)
                    {
                        int xx=i+dx[k];
                        int yy=j+dy[k];
                        if(valid(xx,yy))
                        {
                            if(a[xx][yy]=='*')
                                cnt++;
                        }
                    }
                    a[i][j]=cnt+'0';
                }
            }
        }
        pf("Field #%d:\n",tc++);
        rep0(i,n)
            cout<<a[i]<<'\n';
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
