#include<bits/stdc++.h>
using namespace std;

long long facto(int n)
{
    if(n<=1) return 1;
    return (n*facto(n-1));
}

vector<int>v;
int main()
{
    long long n,sum=0,cnt,save[100],fact[100];
    int i,t;
    cin>>t;
    for(int m=1; m<=t; m++)
    {
        cnt=0;
        cin>>n;

         for(int j = 20; j>=0&&n>0; j--)
        {
            if(facto(j)<=n)
            {
                n-=facto(j);
                save[cnt] = j;  //cout<<save[cnt]<<" ";
                cnt++;
            }
        }

        cout<<"Case "<<m<<": ";
        if(n!=0)
            cout<<"impossible"<<endl;
        else
        {
            cout<<save[cnt-1];
            for(int k = cnt-2; k>=0; k--){
                cout<<"!+"<<save[k]; }
            cout<<"!"<<endl;
        }
    }}
