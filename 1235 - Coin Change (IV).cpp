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
#define N 100006
ll a[30];
ll n,k;

vector<ll>v,v1;

void gen_set1(ll idx, ll val)
{
    v.pb(val);
    if(idx==n/2) return;
    gen_set1(idx+1,val);
    gen_set1(idx+1,val+a[idx]);
    gen_set1(idx+1,val+2*a[idx]);
}

void gen_set2(ll idx, ll val)
{
    v1.pb(val);
    if(idx==n) return;
    gen_set2(idx+1,val);
    gen_set2(idx+1,val+a[idx]);
    gen_set2(idx+1,val+2*a[idx]);
}

int main()
{
    ll t;
    scl(t);
    tcas(x,t)
    {
       cin>>n>>k;
       fr(i,n) scl(a[i]);
       v.clear();
       v1.clear();

       gen_set1(0,0);
       gen_set2(n/2,0);

       sort(v.begin(), v.end());

       pcas(x);
       bool test=0;
       for(int i=0;i<v1.size();i++)
       {
           if(binary_search(v.begin(), v.end() ,k-v1[i]))
           { printf("Yes\n");test=1;break; }
       }
       if(test==0) printf("No\n");
    }
    return 0;
}
