/*In the name of Almighty Allah*/
///********************** Bismillahir Rahmanir Rahim *****************///
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

///*********************** Template Start Here ***********************///
///************************ C o n t a i n e r ************************///

typedef unsigned long            ul;
typedef long long int            lli;
typedef long long                ll;
typedef unsigned long long       ull;
typedef double                   dl;

typedef vector<int>::iterator    vit;
typedef set<int>::iterator       sit;

typedef vector<int>              vi;
typedef vector<string>           vs;
typedef vector<ll>               vll;
typedef vector<vi>               vvi;
typedef vector<vll>              vvll;
typedef pair<int,int>            pii;
typedef pair<double, double>     pdd;
typedef pair<ll, ll>             pll;
typedef vector<pii>              vpii;
typedef vector<pll>              vpll;
typedef set<int>                 si;
typedef set<ll>                  sll;
typedef map<int,int>             mii;
typedef map<ll,ll>               mll;
typedef map<string,int>          msi;
typedef string                   str;
typedef queue<ll>                qll;
typedef stack<ll>                stl;
typedef int32_t                  i32;//typedef __int32 i32;
typedef int64_t                  i64;//typedef __int64 i64;


#define Test                     ll _; std :: cin >> _; while(_--)
#define input(a , n)             for( int i = 0 ; i < n ; i++ ) std :: cin >> a[i];
#define lp(a , i , b)            for( ll i = a ; i < b ; i++ )
#define rlp(a , i , b)           for( ll i = a; i > = b ; i-- )
#define llmx                     LLONG_MAX
#define llmn                     LLONG_MIN
#define imx                      INT_MAX
#define imn                      INT_MIN
#define lmx                      LONG_MAX
#define lmn                      LONG_MIN
#define sz(x)                    x.size()
#define min3(a, b, c)            min(a, min(b, c))
#define max3(a, b, c)            max(a, max(b, c))
#define min4(a, b, c, d)         min(min(a, b), min(c, d))
#define max4(a, b, c, d)         max(max(a, b), max(c, d))
#define max5(a, b, c, d, e)      max(max3(a, b, c), max(d, e))
#define min5(a, b, c, d, e)      min(min3(a, b, c), min(d, e))
#define all(a)                   a.begin() , a.end()
#define fix(x)                   fixed << setprecision(x)
#define mem(a,b)                 memset(a, b, sizeof(a) )
#define lb(v, i)                 lower_bound(len(v), i) - v.begin()
#define ub(v, i)                 upper_bound(len(v), i) - v.begin()
#define PB                       push_back
#define MP                       make_pair
#define F                        first
#define S                        second
#define endl                     '\n'
#define nl                       << endl;
#define nll                      std :: cout << endl;
#define sp                       << " " <<
#define sl                       << " ";
#define cy                       std :: cout << "YES" << endl;
#define cn                       std :: cout << "NO" << endl;
#define case()                   std :: cout<<"Case "<<++o_O<<" : ";
#define go                       return;
#define Good_Bye                 return 0;

#define mid(l,r)                ((r+l)/2)
#define left(node)              (node*2)
#define right(node)             (node*2+1)
#define gcd(a,b)                __gcd(a,b)
#define lcm(a , b)              ( a * ( b / gcd( a , b ) ) )
#define sqr(a)                  ((a) * (a))
#define sw(a,b)                 swap(a,b)
#define sor(a)                  sort(a.begin(),a.end())
#define sorr(a)                 sort(a.begin(),a.end(),greater<int>())
#define uni(s)                  unique(s.begin(),s.end())-s.begin()
#define mxin(a)                 max_element(v.begin(),v.end())-v.begin()
#define minin(a)                min_element(v.begin(),v.end())-v.begin()
#define mxele(a)                max_element(v.begin(),v.end())
#define minele(a)               min_element(v.begin(),v.end())

///**************************** C o n s t ****************************///

#define mx_int_prime             999999937
const int MX =                   1e7+123;
//const double PI =                acos(-1);
const double eps =               1e-9;//10^-9
const int inf =                  2000000000;
const ll infLL =                 9000000000000000000;
const ll MOD =                   1e9+7;
const double PI =                3.141592653589793238462643383279;
long long o_O =                  0;
long long ceil(ll x, ll y)       { return x/y+(x%y!=0); }


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);


int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

///**********************************Debugger**************************************///

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ){
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ){
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ){
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ){
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ){
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu (){
    cerr << endl;
}

template <typename T>
void faltu( T a[], int n ){
    for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest){
    cerr << arg << ' ';
    faltu(rest...);
}

///************************ Template End Here ************************///

void case_i()
{

}
double logg[1000005];

int main()
{
    //file();
    optimize();

    //Test//test case
    //case_i();
    logg[0]=0;

    for(int i=1;i<=1000000;i++){
        logg[i]=logg[i-1]+log(i);
    }

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int x,b;
        cin>>x>>b;

        ll sum=((logg[x]/log(b)))+1;
        cout<<"Case "<<i<<": "<<sum nl;
    }

    Good_Bye
}
