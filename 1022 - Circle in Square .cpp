#include<bits/stdc++.h>
using namespace std;
int main(){
int i,t;double pi = 2 * acos (0.0),r,d,m,n;
//cout<<pi<<endl;
cin>>t;
for(i=1;i<=t;i++){
cin>>r;
d=pi*r*r;
m=(r*2)*(r*2);
n=m-d;
printf("Case %d: %.2lf\n",i,n);}
return 0;
}


