#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
int n,m;
int par[N];
struct edge
{
    int u,v,w;
    bool operator<(const edge &p)const
    {
        return w>p.w;
    }
};
vector<edge>vec;
void makeset(int n)
{
    int i;
    rep(i,n)
        par[i]=i;
    vec.clear();
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
int main()
{
    int tc=1;
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            return 0;
        makeset(n);
        int u,v,w,i;
        while(m--)
        {
            sfff(u,v,w);
            vec.pb((edge){u,v,w});
        }
        int st,en,pass;
        sfff(st,en,pass)
        sort(all(vec));
        int ans=0;
        rep0(i,vec.size())
        {
            int u=findpar(vec[i].u);
            int v=findpar(vec[i].v);
            if(u!=v)
                par[u]=v;

            if(findpar(st)==findpar(en))
            {
                ans=vec[i].w-1;
                break;
            }
        }
        int k=ceil((double)pass/(double)ans);
        pf("Scenario #%d\n",tc++);
        pf("Minimum Number of Trips = %d\n\n",k);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
