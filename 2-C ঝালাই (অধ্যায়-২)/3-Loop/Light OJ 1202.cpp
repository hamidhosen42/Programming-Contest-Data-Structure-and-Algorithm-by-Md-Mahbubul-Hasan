//Problem link : https://lightoj.com/problem/bishops
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    int t;
    cin>>t;

    for(int j=1;j<=t;j++){
        int r1,r2,c1,c2;

        cin>>r1>>c1>>r2>>c2;

        int x=abs(r1-r2);
        int y=abs(c1-c2);

        if(x==y){
            cout<<"Case "<<j<<": 1"<<endl;
        }else{
            if(x%2==y%2){
                cout<<"Case "<<j<<": 2"<<endl;
            }else{
                cout<<"Case "<<j<<": impossible"<<endl;
            }
        }
    }

    return 0;
}
