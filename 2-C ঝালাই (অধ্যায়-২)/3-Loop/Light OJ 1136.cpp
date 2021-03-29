//Problem link : https://lightoj.com/problem/division-by-3
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int fnc(int n){
    if(n==0 || n==1){
        return 0;
    }else{
        return n-1-(n-1)/3;
    }
}
int main()
{
    optimize();

    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int a,b;
        cin>>a>>b;

        cout<<"Case "<<i<<": "<<fnc(b)-fnc(a-1)<<endl;
    }

    return 0;
}
