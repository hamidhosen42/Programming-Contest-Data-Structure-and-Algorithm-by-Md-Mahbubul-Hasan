#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() 
{
    optimize();

    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        double ox,oy,ax,ay,bx,by;
        cin>>ox>>oy>>ax>>ay>>bx>>by;

        double r=sqrt(pow((ox-ax),2)+pow((oy-ay),2));
        double a=sqrt(pow((ax-bx),2)+pow((ay-by),2));

        double theta=acos((r*r+r*r-a*a)/(2.0*r*r));

        cout<<setprecision(9);
        cout<<"Case "<<i<<": "<<(r*theta)<<endl;
    }
    
    return 0;
}
