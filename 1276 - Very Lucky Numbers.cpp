//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

/*
Approach : Complete Search , Branch & Bound
1 . First generate the lucky number
2 . Sort The lucky Number
3 . Then again Run recursive function with careful pruning , store all the very lucky into a vector or array
4. Binary search on the sorted list ( Can use upper_bound, lower_bound also)
*/



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



ll lucky[500005];

ll f=0, mx=1000000000008, cnt=0;

void generate_lucky_number(ll sum)
{
    if(sum>0 &&  sum<mx )lucky[cnt++ ]=sum;
    if(sum>mx)return ;

    generate_lucky_number(10*sum+4);
    generate_lucky_number(10*sum+7);

}
ll sz;

void generate_very_lucky_number(ll sum, ll n)
{
    if(sum>mx || sum<=0)return ;
    if(sum>1 )lucky[sz++]=sum;

    for(ll i=n;i<cnt;i++)
    {
        ll tmp1=lucky[i]*sum;

        if(tmp1>mx || tmp1<=0)break;
        generate_very_lucky_number(tmp1, i);
    }
}


int main()
{
   ll m,n;

    generate_lucky_number(0);
    sort(lucky , lucky+cnt);
    sz=cnt;

    generate_very_lucky_number(1,0);
    sort(lucky, lucky+sz);
    ll siz=unique(lucky, lucky+sz)- lucky;

    //cout<<lucky[0]<<" "<<lucky[1]<<endl;
    ll t;
    scl(t);
    ll ans=0;

    tcas(x,t)
    {
    scl(n); scl(m);
    pcas(x);
    ans=(upper_bound(lucky, lucky+siz, m)- lower_bound(lucky, lucky+siz, n));
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



