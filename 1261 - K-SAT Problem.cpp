
///*********incomplete**********
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

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,ans=0,q;
    scl(t);

    for(x=1; x<=t; x++)
    {
        ll cnt=0,n1,p;
        string  s;
        vector<ll>v;
        vector<ll>v1;
        vector<ll>v2;
        cin>>n>>m>>k;
        fr(i,n)
        {
            fr(j,k)
            {
                cin>>n1;
                if(n1>=0)
                    v.pb(abs(n1));
                else
                    v1.pb(abs(n1));
            }
        }
        sort(v.begin(),v.end() );
        sort(v1.begin(),v1.end() );

        fr(i,v.size())
        {
            fr(j,v1.size())
            {
                if(v[i]==v1[j])
                {
                    v1.erase(v1.begin()+j);
                    v.erase(v.begin()+i);
                }
            }
        }

        fr(i,v1.size()) v.pb( v1[i] );

        cin>>p;
        fr(i,p)
        {
            cin>>y;
            v2.pb(y);
        }

        sort(v.begin(),v.end() );
        sort(v2.begin(),v2.end() );

//        fr(i,v.size())cout<<v[i]<<" - ";
//
//        pn;

        fr(j,v2.size())
        {
            fr(i,v.size())
            {
                if(v2[j]==v[i])
                    cnt++;
            }
        }
        if(cnt==p)
        {
            printf("Case %lld: Yes\n",x);
        }
        else
            printf("Case %lld: No\n",x);

        v.clear();
        v1.clear();
        v2.clear();
    }

    return 0;
}





