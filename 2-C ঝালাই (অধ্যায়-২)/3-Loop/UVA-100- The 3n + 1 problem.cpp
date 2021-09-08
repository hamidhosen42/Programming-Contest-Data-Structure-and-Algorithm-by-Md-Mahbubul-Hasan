#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() 
{
   optimize();

    int n,m,i,k,j,c,s;
    while (cin>>n>>m)
    {
        s=0;
        cout<<n<<" "<<m<<" ";
        int a=max(n,m);
        int b=min(n,m);

        for(int i=b;i<=a;i++){
            c=1;
            j=i;
            while(j > 1)
            {
                if(j % 2==0){
                   j = j/2;
                }

                else{
                   j = (3*j)+1;
                }

                c++;
            }

            if(c>=s){
              s=c;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
