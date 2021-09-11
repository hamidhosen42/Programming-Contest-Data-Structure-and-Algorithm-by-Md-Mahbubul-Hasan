#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define endl '\n'

int main() 
{
    optimize();

    vector<ll>v;
    double a;
    while (cin>>a) v.push_back(a);
    for(int i=v.size()-1;i>=0;i--){
        fraction(4);
        cout<<sqrt(v[i])<<endl;
    }
    return 0;
}
