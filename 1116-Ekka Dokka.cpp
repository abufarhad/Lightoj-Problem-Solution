#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define scl(x) scanf("%lld",&x)

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,ans;
    scl(t);

    for(x=1; x<=t; x++)
    {
        ll cnt=0;
        scl(n);
        if(n&1)
            printf("Case %lld: Impossible\n",x);
        else
        {
            ans=n/2;
            d=2;
            while(ans%2==0){ ans/=2; d*=2;}
            printf("Case %lld: %lld %lld\n",x,ans,d);
        }
    }



    return 0;
}



