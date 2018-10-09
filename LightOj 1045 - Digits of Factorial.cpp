#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long

double f[1000000];
int main(){
ll sum=0,i,n,b,t;
cin>>t;
f[0]=0;
 for(int i=1;i<=1000000;i++){
f[i]=f[i-1]+log(i);
} //cout<<f[i-1]<<" ";
for(i=1;i<=t;i++){
        scanf("%lld %lld",&n,&b);
        //cin>>n>>b;
       ll  cnt=f[n]/log(b) + 1;
        printf("Case %lld: %lld\n",i,cnt);
}}

