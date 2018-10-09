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
#define Max 50006

//ll  m[Max],n[Max];

set<ll>s;

int main()
{

    ll t,i,j,a,b,p,l,k,e,f,y;
    scl(t);

    for(i=1; i<=t; i++)
    {
        s.clear();
        ll cnt=0,b=1;
        scl(p), scl(l);
        a=p-l;
        for(j=1,k=1,y=1; j<=sqrt(p); j++)
        {

            e=a/j;
            f=a%j;
            if(f==0 and e>l)
            {
                cnt++, y++; //m[k]=e; n[y]=j;
                k++;
                s.insert(e);
                s.insert(j);
            }
        }

        // cout<<"cnt = "<<cnt<<" "<<b<<endl;
        printf("Case %lld:",i );

        if(cnt>0)
        {

            set< ll > :: iterator it;
            for(it = s.begin(); it != s.end(); it++)
            {
                // cout << *it << endl;
                if(*it>l)
                {
                    printf(" %lld",*it );
                }

            }

            cout<<endl;
        }

        else
            printf(" impossible\n");
    }
    return 0;
}

