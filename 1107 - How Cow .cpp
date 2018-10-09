#include<bits/stdc++.h>
using namespace std;
int main(){
int y1,y2,x,y,e,f,t,x1,x2,n,i;
cin>>t;
for(i=1;i<=t;i++){
    cin>>x1>>y1>>x2>>y2;
    cin>>n;
    printf("Case %d:\n",i);
    while(n--){
        cin>>x>>y;
    if((x>=x1&&x<=x2)&&(y>=y1&&y<=y2)){  printf("Yes\n");}  else printf("No\n");
}}
return 0;
}
