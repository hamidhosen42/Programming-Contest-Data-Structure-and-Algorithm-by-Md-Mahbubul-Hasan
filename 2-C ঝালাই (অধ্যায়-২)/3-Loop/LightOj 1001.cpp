//Pblem Link : https://lightoj.com/problem/opposite-task
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>a;

        int b=a/2;
        a=a%2+a/2;
        
        cout<<a<<" "<<b<<endl;
    }
    
    return 0;
}
