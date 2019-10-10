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
#define md                  10000007
#define inf                  1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)          memset(a, i, sizeof(a))
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)

#define N 100006
ll a[25][5];
ll dp[1005][1005];
ll n;

ll calc(ll i,ll j)
{
    if(i==n) return  a[i][j];
    if(dp[i][j] !=-1)return dp[i][j];
    ll r1, r2;

    if(j==1)         r1=2, r2=3;
    else if(j==2)  r1=1, r2=3;
    else               r1=1, r2=2;

    ll h1=a[i][j]+calc(i+1, r1);
    ll h2=a[i][j]+calc(i+1, r2);

    return dp[i][j]=min(h1, h2);
}

int main()
{
    ll m,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      cin>>t;
      tcas(x,t)
      {
      scl(n);
      mem(a,0);
      fr1(i,n)fr1(j,3)cin>>a[i][j];

      mem(dp,-1);
      ll r1=calc(1,1);
      ll r2=calc(1,2);
      ll r3=calc(1,3);
      pcas(x);
      ans=min(r1, min(r2,r3));

      pfl(ans);

      }

return 0;
}

/// you should actually read the stuff at the bottom
/* stuff you should look for
    *print right output
    * int overflow, array bounds
    * special cases (n=1?), set tle
    * do smth instead of nothing and stay organized
*/


