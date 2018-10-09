#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 10^9

bool isprime(ll p )
{
    if(p<2) return false;
    if(p==2) return true;
    if(p%2==0) return false;
    for(int i=3; i<=sqrt(p); i=i+2)
    {
        if(p%i==0) return false;
    }
    return true;
}

int main()
{
    ll i,m,num,b,t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>num;
        ll number=sqrt(num);
        if(number*number==num && isprime(number)==true)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl; }
        return 0;
    }
