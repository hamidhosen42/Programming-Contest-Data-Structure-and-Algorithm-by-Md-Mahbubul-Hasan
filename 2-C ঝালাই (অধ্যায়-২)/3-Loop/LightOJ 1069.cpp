//Problem Link: https://lightoj.com/problem/lift
/*In the name of Almighty Allah*/
///********************** Bismillahir Rahmanir Rahim *****************///
#include<bits/stdc++.h>
using namespace std;

///*********************** Template Start Here ***********************///

///************************ Policy based data structure Template ************************///
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree< long long, null_type, less<long long>, rb_tree_tag,tree_order_statistics_node_update > increasing_set;
typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag,tree_order_statistics_node_update > increasing_multiset;
typedef tree< long long, null_type, greater<long long>, rb_tree_tag,tree_order_statistics_node_update > decreasing_set;
typedef tree< long long, null_type, greater_equal<long long>, rb_tree_tag,tree_order_statistics_node_update > decreasing_multiset;

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

///************************ Policy based data structure Template End ************************///

///************************ C o n t a i n e r ************************///

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
typedef int32_t i32;//typedef __int32 i32;
typedef int64_t i64;//typedef __int64 i64;


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
#define rn return 0

///**************************** C o n s t ****************************///

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
ostream& operator << ( ostream& os, const pair< F, S > & p )
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v )
{
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v )
{
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v )
{
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v )
{
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu ()
{
    cerr << endl;
}

template <typename T>
void faltu( T a[], int n )
{
    for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

///************************ Template End Here ************************///

int main()
{
    optimize();

    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int my,lift;
        cin>>my>>lift;

        if(my==lift){
            cout<<"Case "<<i<<": "<<(3+5+3+(4*my)+3+5)<<endl;
        }else if(my<lift){
            cout<<"Case "<<i<<": "<<((4*lift)+3+5+3+3+5)<<endl;
        }else{
            cout<<"Case "<<i<<": "<<(((my-lift)*4)+3+5+3+(my*4)+3+5)<<endl;
        }
    }
    rn;
}
