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
#define mp                make_pair
#define ppb                pop_back

#define ps                 printf(" ")

#define dsort(a)        sort(a,a+n,greater<int>())
#define asort(a)        sort(a,a+n)
#define mod             10000007
#define mx               (1<<28)
#define Pi                  2*acos(0.0)


int main()
{

    ll m,n,t,b,d,i,j,k,x,y,z,l,ans=0;
    string c;
    scl(t);
    getline(cin, c);
    for(x=1; x<=t; x++)
    {
        string s,s1,s2,s3,s4,s5;
        ll cnt=0;
        getline(cin, s);
        getline(cin, s1);

        for(i=0; i<s.size(); i++ )
        {
            if(s[i]==' ')
                continue;
            else
                s2+=tolower( s[i]);
        }

        for(i=0; i<s1.size(); i++ )
        {
            if(s1[i]==' ')
                continue;
            else
                s3+= tolower(s1[i]);
        }
       //cout<<s2<<endl<<s3<<endl;


        ll len1=s2.size(),  len2=s3.size();
        bool ok;

        for(i=0; i<len1; i++)
        {
            for(j=0; j<len2; j++)
            {
                if( s2[i]==s3[j])
                {
                    ok=1;
                    cnt++;
                    s3.erase(s3.begin()+j );
                    break;
                }
            }
            if(ok==0)
                break;
        }

        if(cnt!=len2)
            printf("Case %lld: No\n",x);
        else
            printf("Case %lld: Yes\n",x);
    }
    return 0;
}
