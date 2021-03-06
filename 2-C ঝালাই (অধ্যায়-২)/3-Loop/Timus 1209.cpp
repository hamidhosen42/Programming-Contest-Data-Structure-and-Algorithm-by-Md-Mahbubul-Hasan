//Problem link: https://acm.timus.ru/problem.aspx?space=1&num=1209
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long int
#define mx 10000000000
int main()
{
    optimize();

    ll  t, k,n,x=0;

    cin >> t;

    while(t--) {
        cin >> k;

        n = (-1 + sqrt(double(8*k-7))) / 2.0;

        if(x){
            cout << ' ';
            x=1;
        }

        if(k == n*(n+1)/2+1) cout << "1 ";
        else cout << "0 ";
    }

    cout << '\n';

    return 0;
}
