#include<bits/stdc++.h>
using namespace std;
vector<int>v[1001];
vector<int>m[33];
vector<int>ans;

void cal()
{
    for(int n = 1; n <= 1000; n++)
    {
        int k = n;
        for (int i=1; i<=sqrt(n); i++)
        {
            if (n%i==0)
            {
                if (n/i == i)
                    v[k].push_back(i);
                else
                {
                    v[k].push_back(i);
                    v[k].push_back(n/i);
                }
            }
        }
    }
    for(int i = 1; i <= 32; i++)
    {
        for(int j = 1; j <= 1000; j++)
        {
            int q = v[j].size();
            if(i==q)
            {
                m[i].push_back(j);
            }
        }
    }
    for(int i = 1; i <= 32; i++)
    {
        for(int s = m[i].size()-1; s >=0; s--)
        {
            ans.push_back(m[i][s]);
        }
    }
}

int main()
{
    cal();
    int T, n;
    cin>>T;
    for(int t = 1; t <= T; t++)
    {
        cin>>n;
        cout<<"Case "<<t<<": "<<ans[n-1]<<endl;
    }

    return 0;
}
////////////////////////////////////////////////////////////..............................//////////////////////
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

const int MX=1e6+123;
bitset<MX> is_prime;
vector<int> prime;

void prime_generation ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = true;

    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == true ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = false;
            }
        }
    }

    is_prime[2] = true;
    prime.push_back(2);

    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == true ) {
            prime.push_back ( i );
        }
    }
}

vector<int>listPower[1123];
int NOD[1123];

int main()
{
    optimize();

    int limit=1e3;
    prime_generation(limit);

    //harmonic series use  and NOD use
    for(auto u:prime){
        for(int i=u;i<=limit;i+=u){
            int cnt=1,temp=i;
            while (temp%u==0){
                temp/=u;
                cnt++;
            }
            listPower[i].push_back(cnt);
        }
    }

    for(int i=1;i<=limit;i++){
        NOD[i]=1;
        for(auto u:listPower[i]){
            NOD[i]*=u;
        }
    }

    vector<pair<int,int>>v;

    for(int i=1;i<=limit;i++){
        v.push_back({NOD[i],-i});
    }

    sort(v.begin(),v.end());

    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n;
        cin>>n;

        cout<<"Case "<<i<<": "<<-v[n-1].second<<endl;
    }

    return 0;
}
///////////////////////////////////........................................./////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int NOD[1123];

int main()
{
    optimize();

    int limit=1e3;

    for(int i=1;i<=limit;i++){
        for(int j=i;j<=limit;j+=i){
            NOD[j]++;
        }
    }


    vector<pair<int,int>>v;

    for(int i=1;i<=limit;i++){
        v.push_back({NOD[i],-i});
    }

    sort(v.begin(),v.end());

    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n;
        cin>>n;

        cout<<"Case "<<i<<": "<<-v[n-1].second<<endl;
    }

    return 0;
}
