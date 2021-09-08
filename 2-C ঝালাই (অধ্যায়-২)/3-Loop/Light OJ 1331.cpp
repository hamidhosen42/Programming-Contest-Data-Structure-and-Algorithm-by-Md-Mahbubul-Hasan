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
        double r1,r2,r3;
        cin>>r1>>r2>>r3;

        double a,b,c;
        a=r1+r2;
        b=r1+r3;
        c=r2+r3;

        double s=(a+b+c)/2.0;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));

        double angle1=acos((a*a+b*b-c*c)/(2*a*b));
        double angle2=acos((a*a+c*c-b*b)/(2*a*c));
        double angle3=acos((b*b+c*c-a*a)/(2*b*c));

        double sector1=0.5*r1*r1*angle1;
        double sector2=0.5*r2*r2*angle2;
        double sector3=0.5*r3*r3*angle3;

        double ans=area-(sector1+sector2+sector3);

        cout<<setprecision(11);
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    
    return 0;
}
