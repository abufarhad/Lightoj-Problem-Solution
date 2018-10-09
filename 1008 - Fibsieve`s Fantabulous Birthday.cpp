
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x++)
#define ps printf(" ")
#define pn printf("\n")

#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)
#define Max 5000006

int main()
{

ll a,b,m,n,i,t,c,r;
cin>>t;
   for(i=1; i<=t; i++)
    {
        scl(n);
        m=ceil(sqrt(n));
        b=m*m-n;
        if(b<m)
        {
            r=b+1;
            c=m;
        }
        else
        {
            c=2*m-b-1;
            r=m;
        }
        if(m&1)
        {
            swap(c,r);
        }
        printf("Case %lld: %lld %lld\n",i,c,r);

    }
    return 0;
}

