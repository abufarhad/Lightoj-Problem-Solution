//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a)          memset(a, -1, sizeof(a))
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define md                     100000007
ll dp[51][1001];
ll  coin[51], times[51], n, amt;

ll make_way(ll i, ll amnt)
{
    if(i>=n)
    {
        if(amnt==0)return 1;
        else return 0;
    }
    ll res=0;
    if(dp[i][amnt]!=-1)return dp[i][amnt];

    for(ll k=1; k<=times[i];k++)
    {
        if(amnt- k*coin[i]>=0 )
            res+=make_way( i+1,  amnt- (k*coin[i]) )%md;
        else break;
    }
    res+=(make_way(i+1, amnt))%md;

    dp[i][amnt]=res%md;
    return dp[i][amnt];
}

int main()
{

    ll m,t,b,c,d,i,j,k,x,y,z,l,q,r;
      scl(t);
      tcas(x,t)
      {
      //memset(dp, -1, sizeof(dp));
      mem(dp);
      ll amt=0;
      scl(n), scl(amt);
      ll cnt=0,ans=0;

      fr(i,n)scl(coin[i]);
      fr(i,n)scl(times[i]);
      pcas(x);

      ans=make_way(0,amt);

      pfl(ans);
      }
return 0;
}

