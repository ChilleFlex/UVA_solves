#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
int main()
{
    FAST;
    int n;
    while(cin>>n)
    {
        int dig=1,cur=1;
        while(cur%n)
        {
            cur=(cur*10+1)%n;
            dig++;
        }
        cout<<dig<<endl;
    }
}
© 2021 GitHub, Inc.
