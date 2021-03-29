//Problem Link : https://lightoj.com/problem/parity
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
        int  n;
        vector<int>v;
        cin>>n;
        for(int i=0; n>0; i++)
        {
            v.push_back(n%2);
            n= n/2;
        }
        int c=0;

        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                c++;
            }
        }
        if(c%2==0){
            cout<<"Case "<<j<<": "<<"even"<<endl;
        }else{
            cout<<"Case "<<j<<": "<<"odd"<<endl;
        }
    }

    return 0;
}
