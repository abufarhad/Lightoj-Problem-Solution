#include<bits/stdc++.h>
using namespace std;
int main(){
int t,a,b,i,sum;

cin>>t;
for(i=1;i<=t;i++){
cin>>a;    sum=0;

while(a--){
 //for(i=0;i<a;i++){
cin>>b;  if(b>0)  sum=sum+b;   }

if(sum<0) { sum=0;
printf("Case %d: %d\n",i,sum); }
else
printf("Case %d: %d\n",i,sum);}
return 0;
}
