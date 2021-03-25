//Even or odd:

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    __int32 a;
    cin>>a;

    if(a%2==0) cout<<a<<" is even"<<endl;
    else cout<<a<<" is odd"<<endl;
    return 0;
}

//Leap year:

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    __int32 year;
    cin>>year;

   if(year%400==0){
       cout<<year<<" is Leap Year"<<endl;
   }else if(year % 100==0){
       cout<<year<<" is not Leap Year"<<endl;
   }else if( year%4==0){
       cout<<year<<" is Leap Year"<<endl;
   }else{
       cout<<year<<" is not Leap Year"<<endl;
   }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    __int32 year;
    cin>>year;

   if(year%400==0 ||(year%100!=0 && year%4==0)){
       cout<<year<<" is Leap Year"<<endl;
   }else{
       cout << year << " is not Leap Year" << endl;
   }
    return 0;
}
