//Prolem innk : https://acm.timus.ru/problem.aspx?space=1&num=1083
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long int
int main()
{
    optimize();

    int n,x,fact=1;
    string  s;

    cin>>n;
    cin>>s;
    x=s.size();
    for(int i=n;i>=1;i=i-x){
        fact*=i;
    }
    cout<<fact<<endl;

    return 0;
}
