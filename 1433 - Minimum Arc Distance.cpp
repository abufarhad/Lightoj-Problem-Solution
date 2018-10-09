#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,ax,ay,ox,oy,bx,by,t;
    double OA,OB,AB, result,angle;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>ox>>oy>>ax>>ay>>bx>>by;
       OA=sqrt(pow(ox-ax,2)+pow(oy-ay,2));
       OB=sqrt(pow(ox-bx,2)+pow(oy-by,2));

      //OB=OA;
       AB=sqrt(pow(ax-bx,2)+pow(ay-by,2));

        angle =acos((OA*OA+OB*OB-AB*AB)/(2*OA*OB));
//
   //  cout<<OA<<" "<<AB<<" "<<angle<<endl;
        result=OB*angle;
       printf("Case %d: %.6lf\n",i,result);
    }
}

