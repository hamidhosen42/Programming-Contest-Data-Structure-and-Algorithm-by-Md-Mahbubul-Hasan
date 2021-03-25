//Problem link: https://acm.timus.ru/problem.aspx?space=1&num=1086
/*In the name of Almighty Allah*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef set<int> si;
typedef map<string,int> msi;
typedef double dl;
typedef string  st;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937
#define CY cout<<"YES"<<endl
#define CN cout<<"NO"<<endl
#define r return 0

const double PI = acos(-1);
const double eps = 1e-9;//10^-9
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))
#define sw(a,b) swap(a,b)
#define sor(a) sort(a.begin(),a.end())
#define sorr(a) sort(a.begin(),a.end(),greater<int>())
#define uni(s) unique(s.begin(),s.end())-s.begin()
#define mxdex(a) max_element(v.begin(),v.end())-v.begin()
#define mindex(a) min_element(v.begin(),v.end())-v.begin()
#define mxele(a) max_element(v.begin(),v.end())
#define minele(a) min_element(v.begin(),v.end())

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

//Debugger

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu () {
    cerr << endl;
}

template <typename T>
void faltu( T a[], int n ) {
    for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
    cerr << arg << ' ';
    faltu(rest...);
}

#define MAX_N 164000
bool isPrime[MAX_N];
int ans[15000],sz;

int main() {
    optimize();

    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;

    ans[0] = 2;
    sz = 1;

    for (int i = 3; i < MAX_N && sz < 15000; i += 2) {
        if (isPrime[i]) {
            ans[sz] = i;
            ++sz;
            if (i < MAX_N / i)
                for (int j = i * i; j < MAX_N; j += i)
                    isPrime[j] = false;
        }
    }

    int T, ind;
    cin>>T;

    while (T--) {
        cin>>ind;
        cout<<ans[ind-1]<<endl;
    }

    return 0;
}
