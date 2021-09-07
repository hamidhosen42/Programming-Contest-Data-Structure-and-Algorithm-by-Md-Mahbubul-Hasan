#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef unsigned long long ll;

int main()
{
    optimize();

    int t;
    cin >> t;

    for(int i=1;i<=t;i++){
        int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,area;
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;

        Dx=Ax-Bx+Cx;
        Dy=Ay-By+Cy;

        area=0.5*(((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay))-((Ay*Bx)+(By*Cx)+(Cy*Dx)+(Dy*Ax)));

        if(area<0){
            cout<<"Case "<<i<<": "<<Dx<<" "<<Dy<<" "<<(-1*area)<<endl;
        }else{
            cout<<"Case "<<i<<": "<<Dx<<" "<<Dy<<" "<<area<<endl;
        }
    }
    return 0;
}
