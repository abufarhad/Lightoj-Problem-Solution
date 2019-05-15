//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define scl(x)            scanf("%lld",&x)
#define pfl(x)            printf("%lld\n",x)
#define pn                 printf("\n")
#define debug           printf("I am here\n")
#define mp                make_pair
#define ppb                pop_back

#define ps                 printf(" ")

#define dsort(a)        sort(a,a+n,greater<int>())
#define asort(a)        sort(a,a+n)
#define mod             10000007
#define mx               (1<<28)
#define Pi                  2*acos(0.0)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,ans=0,q;
    scl(t);

    for(x=1; x<=t; x++)
    {
        vector<ll>v;
        ll cnt=0;
        scl(n);
        scl(q);
        for(i=0; i<n; i++)
        {
            cin>>b, v.pb(b);
        }
        while(q--)
        {
            char c;
            cin>>c;
            if(c=='S')
            {
                cin>>m;
                fr(i,n)v[i]+=m;
            }
            if(c=='M')
            {
                cin>>m;
                fr(i,n)v[i]*=m;
            }
            if(c=='D')
            {
                cin>>m;
                fr(i,n)v[i]/=m;
            }
            if(c=='R')
            {
                reverse(v.begin(), v.end());
            }
            if(c=='P')
            {
                cin>>m>>k;
                swap( v[m], v[k]);
            }
        }
        printf("Case %lld:\n",x);
        fr(i,n-1)cout<<v[i]<<" ";cout<<v[n-1];
        v.clear();
        cout<<endl;
    }
    return 0;
}





