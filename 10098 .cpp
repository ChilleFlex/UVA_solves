#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int n;
    string a="";
    cin>>n;
    while(n--)
    {
       cin>>a;
       sort(a.begin(),a.end());

        do{
           cout<<a<<endl;
        }while(next_permutation(a.begin(),a.end()));
        cout<<endl;
    }
}
