#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
int main()
{
    ll num,actual;
    int chk,t=1;
    while(scanf("%lld",&num)==1)
    {
        actual=num;
        pf("%4d.",t++);
        if(!num)pf(" 0");
        chk=num/100000000000000;
        num%=100000000000000;
        if(chk)
            pf(" %d kuti",chk);
        chk=num/1000000000000;
        num%=1000000000000;
        if(chk)
            pf(" %d lakh",chk);
        chk=num/10000000000;
        num%=10000000000;
        if(chk)
            pf(" %d hajar",chk);
        chk=num/1000000000;
        num%=1000000000;
        if(chk)
            pf(" %d shata",chk);
        chk=num/10000000;
        num%=10000000;
        if(actual>10000000 && !chk)
                pf(" kuti");
        if(chk)
            pf(" %d kuti",chk);
        chk=num/100000;
        num%=100000;
        if(chk)
            pf(" %d lakh",chk);
        chk=num/1000;
        num%=1000;
        if(chk)
            pf(" %d hajar",chk);
        chk=num/100;
        num%=100;
        if(chk)
            pf(" %d shata",chk);
        if(num)
            pf(" %d",num);
        nl
    }
}
}
