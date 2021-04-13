#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;
int n,cnt;
int par[N];
void makeset()
{
    int i;
    rep0(i,n+1)
        par[i]=i;
}
struct edge
{
    int u,v;
    double dis;
    bool operator<(const edge &p)const
    {
        return dis<p.dis;
    }
};
vector<edge>vec;
struct point
{
    int x,y;
}pnt[N];
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
double calc(point a,point b)
{
    double x1=a.x,y1=a.y;
    double x2=b.x,y2=b.y;
    double x=(x2-x1)*(x2-x1);
    double y=(y2-y1)*(y2-y1);
    return sqrt(x+y);
}
double mst()
{
    int i,j;
    double sum=0;
    rep0(i,n)
    {
        rep0(j,n)
        {
            if(i<=j)
                continue;
            double dis=calc(pnt[i],pnt[j]);
            vec.pb({i,j,dis});
        }
    }
    sort(all(vec));
    rep0(i,vec.size())
    {
        int u=findpar(vec[i].u);
        int v=findpar(vec[i].v);
        if(u!=v)
        {
            par[u]=v;
            cnt++;
            sum+=vec[i].dis;
            if(cnt==n-1)
                break;
        }
    }
    return sum;
}
int main()
{
    while(cin>>n)
    {
        makeset();
        int i;
        rep0(i,n)
            cin>>pnt[i].x>>pnt[i].y;
        int q,a,b;
        sf(q);
        cnt=0;
        while(q--)
        {
            sff(a,b);
            a--;b--;
            int u=findpar(a);
            int v=findpar(b);
            if(u!=v)
            {
                cnt++;
                par[u]=v;
            }
        }
        pf("%.2f\n",mst());
        vec.clear();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
