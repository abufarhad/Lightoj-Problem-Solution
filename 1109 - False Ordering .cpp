#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,b,cnt=0;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int mex=0;
    if(a[0]==0&&x==0 )
    {
        cout<<"1"<<endl;
        return 0;
    }
    else if(a[0]!=0&&x==0 )
    {
        cout<<"0"<<endl;
        return 0;
    }
    else
        for(int i=0; i<n; i++)
        {
            if(a[i]==mex)
            {
                mex=mex+1;
            }
            else if(x-mex>0)
            {
                x=x-mex;
                cnt++;
                cout<<"x  -> "<<x<<"  mex "<<mex;
            }
        }
    cout<<cnt<<endl;


    return 0;
}
