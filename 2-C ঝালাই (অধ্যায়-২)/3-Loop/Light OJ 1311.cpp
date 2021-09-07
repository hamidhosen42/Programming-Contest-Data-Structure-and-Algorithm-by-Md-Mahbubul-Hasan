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
        double a,b,c,d,e,t1,t2,t3;
        cin>>a>>b>>c>>d>>e;

        t1=a/d;
        t2=b/e;
        t3=t1;

        if(t1<t2){
            t3=t2;
        }
        double dis=c*t3;
        double t4=a*t1-0.5*d*t1*t1;
        t4+=b*t2-0.5*e*t2*t2;
        cout<<setprecision(9);
        cout<<fixed<<"Case "<<i<<": "<<t4<<" "<<dis<<endl;
    }
    
    return 0;
}
