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
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
vector<ll>a;

ll bs(ll l, ll r, ll val)
{
    ll ans=l-1, mid;
    while(l<=r)
    {
        mid=(l+r)>>1;
        if(a[mid]<val)
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
      scl(t);
      tcas(j,t)
      {
          ll cnt=0,ans=0;
          scl(n);

          fr(i,n)cin>>x, a.pb(x);
          vasort(a);


    ///******* One way upper_bond binary search ***********

//          fr(i,n)
//          {
//              for(k=i+1;k<n-1;k++)
//              {
//                  ll index=upper_bound(a.begin(), a.end(), a[i]+a[k]-1 )-a.begin()-1;
//                  ans+=(index-k);
//              }
//          }

     ///*******Another way direct binary search***********

     fr(i,n)
     {
         for(k=i+1;k<n;k++)
         {
             ans+=bs(k+1, n-1, a[i]+a[k] )-k;
         }
     }

      pcas(j);
      pfl(ans);
      a.clear();
}

return 0;
}

