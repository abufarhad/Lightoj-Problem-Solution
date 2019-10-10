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
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)

int main()
{

    ll m,n,t,a,b,c,d,i,j,k,x,y,z,l,q,r;
    cin>>t;
    tcas(i,t)
    {
      ll cnt, ans;
      cin>>a>>b>>l;

      ll tmp=a*b/__gcd(a,b);
      pcas(i);
      if(l%tmp)cout<<"impossible"<<endl;
      else
      {
          x=l/tmp;
          y=__gcd(x,l);
          if(y==1)pfl(x);
          else
          {
              ans=1;
              while(y!=1)
              {
                  y=__gcd(x,l);
                  l/=y;

                  ans*=y;
              }
              pfl(ans);
          }
      }

    }
return 0;
}
