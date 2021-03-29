//Problem link: https://lightoj.com/problem/ekka-dokka
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        long long n,odd,even;

        cin>>n;

        if(n%2!=0){
            cout<<"Case "<<i<<": "<<"Impossible"<<endl;
        }else{
            odd=n/2;
            even=2;

            while (odd%2==0){
                odd/=2;
                even*=2;
            }
            cout<<"Case "<<i<<": "<<odd<<" "<<even<<endl;
        }
    }
    return 0;
}
