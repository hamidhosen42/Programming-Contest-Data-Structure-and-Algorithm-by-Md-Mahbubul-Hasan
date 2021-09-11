#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(a)               \
    cout.unsetf(ios::floatfield); \
    cout.precision(a);            \
    cout.setf(ios::fixed, ios::floatfield);
#define endl '\n'

int main()
{
    optimize();

    ll n;
    vector<ll> v;
    cin >> n;

    if (n == 0)
    {
        cout << 10 << endl;
    }
    else if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 9; i > 1; i--)
        {
            while (n % i == 0)
            {
                /* code */
                n /= i;
                v.push_back(i);
            }
        }
        if (n == 1)
        {
            for (int i = v.size() - 1; i >= 0; i--)
            {
                cout << v[i];
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
