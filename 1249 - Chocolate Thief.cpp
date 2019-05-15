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
#define ppb                pop_back

#define ps                 printf(" ")

#define dsort(a)        sort(a,a+n,greater<int>())
#define asort(a)        sort(a,a+n)
#define mod             10000007
#define mx               (1<<28)
#define Pi                  2*acos(0.0)

#define frrev(i,a,b)    for(int i=a;i>=b;i--)
#define scl2(x,y)       scanf("%lld %lld",&x,&y)
#define pf(x)            push_front(x)
#define ppf(x)          pop_front(x)


int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,ans=0,q;
    string s,s1,s2;
    vector<ll>v;
    set<ll>st;
    set< ll > :: iterator it;

    scl(t);

    for(i=1; i<=t; i++)
    {
      ll cnt_max=-1, cnt_min=10000000;
        scl(n);
        while(n--)
        {
            cin>>s>>x>>y>>z;
            k=x*y*z;
            st.insert(k);
            if(k>cnt_max) {s1=s;cnt_max=k;}
            if(k<cnt_min)  {s2=s;cnt_min=k;}
        }
        //cout<<cnt_max<<" "<<s1<<" "<<cnt_min<< " "<<s2<<endl;
        for(it = st.begin(); it != st.end(); it++) v.pb(*it);

        if(st.size()==1) printf("Case %lld: no thief\n",i);
        else{
        printf("Case %lld: ",i);
        cout<<s1<<" took chocolate from "<<s2<<endl;}

        v.clear(), st.clear();
    }

return 0;
}




