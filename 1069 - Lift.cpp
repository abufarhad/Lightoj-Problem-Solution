//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    long long n,m,i,k,l_pos,my_pos,t,x;
    cin>>t;

    for(x=1; x<=t; x++)
    {
        long long  ans;
        cin>>my_pos>>l_pos;
        if(l_pos>=my_pos)
        {
            ans=11+8+(l_pos*4);
        }
        else
        {
            ans=11+8+((my_pos-l_pos)*4)+(my_pos*4);
        }
        printf("Case %lld: %lld\n",x,ans);

    }
}
