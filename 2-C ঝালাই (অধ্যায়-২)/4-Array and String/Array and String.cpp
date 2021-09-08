//১০ জন প্রতিযোগী এবং ১০০ টি প্রশ্নের খেলার বিজয়ি Program
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() 
{
    optimize();

    int a[10];

    //initialization all the score are 0
    for(int i=0;i<10;i++){
        a[i]=0;
    }

    for(int i=0;i<100;i++){
        //the player giving correct answer
        int id;
        cin>>id;
        a[id-1]++;
    }

    //initializing max score
    int maximum_score=0;
    for(int i=0;i<10;i++){
        //if i'th players score is more than the max
        if(maximum_score<a[i]){
            maximum_score=a[i];
        }
    }    

    cout<<"Winners are :";
    for(int i=0;i<10;i++){
        //if i'th players score is the maximum
        if(maximum_score==a[i]){
            //print his id
            cout<<i+1<<endl;
        }
    }
    return 0;
}
