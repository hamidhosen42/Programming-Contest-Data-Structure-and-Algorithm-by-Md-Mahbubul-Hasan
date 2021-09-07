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
        ll n,m;
        cin>>n>>m;

        cout<<"Case "<<i<<": "<<((n/2)*m)<<endl;
    }
    return 0;
}
