#include <bits/stdc++.h>

const int N = 1005;
const int MOD = 1000000007;

using ll = long long;
using namespace std;

void __print(int x) {cerr << x;} void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;} void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;} void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;} void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;} void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';} void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V> void __print(const pair<T, V> &x)
{cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> void __print(const T &x)
{int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v)
{__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
    #define db(x...) cerr << "[" << #x << "] = [", _print(x)
#endif

int n,dp[N][N];
bool taken[N];
vector<int>vec;
int func(int l,int r)
{
    if(dp[l][r]!=-1)
        return dp[l][r];
    int i,ans=INT_MAX;
    bool f=false;
    rep0(i,n)
    {
        if(vec[i]>l && vec[i]<r)
        {
            f=true;
            int x=r-l;
            x+=func(vec[i],r);
            x+=func(l,vec[i]);
            ans=min(ans,x);
        }
    }
    if(!f)
        return dp[l][r]=0;
    return dp[l][r]=ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt","w",stdout);
    #endif
    int len;
    while(1)
    {
        sf(len);
        if(!len)
            return 0;
        mem(dp,-1);
        memb(taken);
        vec.clear();
        int i,k;
        sf(n);
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        pf("The minimum cutting is %d.\n",func(0,len));
    }
}
