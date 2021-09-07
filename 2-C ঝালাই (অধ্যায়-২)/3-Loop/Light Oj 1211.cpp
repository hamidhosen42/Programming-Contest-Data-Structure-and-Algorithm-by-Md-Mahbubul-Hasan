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
        int n;
        cin>>n;

        int x1,y1,z1,x2,y2,z2,a=0,b=0,c=0,d=1005,e=1005,f=1005;
        for(int j=1;j<=n;j++){
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            
            a=max(a,x1);
            d=min(d,x2);

            b=max(b,y1);
            e=min(e,y2);

            c=max(c,z1);
            f=min(f,z2);
        }
        ll x=(d-a)*(e-b)*(f-c);
        //cout<<x<<endl;
        if(x>0){
            cout<<"Case "<<i<<": "<<x<<endl;
        }else{
            cout<<"Case "<<i<<": "<<0<<endl;
        }
    }
    
    return 0;
}
