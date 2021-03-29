প্রবেলমটিতে আমাদেরকে বাইরের বৃত্তের ব্যাসার্ধ এবং কতটি  বৃত্ত  আছে বাইরের বড় বৃত্তের ভিতরে সেই বৃত্তের সংখ্যা  দেয়া আছে । আমাদেরকে  ভিতরের ছোট  বৃত্তটির ব্যাসার্ধ বের করতে হবে।
আমরা জানি যে, একটি পূর্ণ বৃত্ত ৩৬০ ডিগ্রি হয়ে থাকে। 
উদাহরণ থেকেই জানা যাক,

ভিতরের ছয়টি বৃত্ত বাইরের বড় বৃত্তটিকে ৬ টি ভাগে ভাগ করেছে।  

তাহলে ভিতরের একটি বৃত্তের পরিধির সাথে বাইরের বড় বৃত্তের কেন্দ্র কত ডিগ্রী কোণ তৈরি করে??

তা হবে ৩৬০ কে n  দিয়ে ভাগ করলে যতো হয় ততো। 

আর আমরা যদি বলি  ভিতরের বৃত্তের কেন্দ্র এবং পরিধির সাথে  বাইরের বড় বৃত্তের কেন্দ্রটি কত ডিগ্রী কোণ তৈরি করে??


360
2*n
or, 180/n
or,   π/n

 এখন শুধু একটি ত্রিকোণোমিতি জানলেই হবে ।
আমরা কোণ পেয়ে গেলাম , θ = π/n;
Sin θ কে লিখা যায় লম্ব / অতিভুজ হিসেবে ।
এখানে লম্ব  r, আর অতিভুজ  R-r, 
R হলো বাইরের বৃত্তের ব্যাসার্ধ আর r হলো ভিতরের বৃত্তের ব্যাসার্ধ ।

Sin θ = r/(R-r)
or, Sin(PI/n) = r/(R-r)
or,  r = sin(PI/n)*(R-r) 
or,  r= (R*sin(PI/n)) – (r*sin(PI/n))
or,  r + r*sin(PI/n)  = R*sin(PI/n)
or,  r(1+sin(PI/n)) =R*sin(PI/n)
or,  r=(R*sin(PI/n)) / (1+sin(PI/n))
তাহলে আমরা পেয়ে ভিতরের ছোট বৃত্তের ব্যাসার্ধ ।

Problem link= https://lightoj.com/problem/calm-down
solution link details: http://sajibtalukder2k16.blogspot.com/2019/01/blog-post_25.html

#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

#define PI acos(-1)
int main()
{
    optimize();

    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n;
        double R;
        cin>>R>>n;

        double x=(PI/n);
        double angle=sin(x);

        double r=(R*angle)/(1+angle);

        cout<<fixed<<setprecision(6)<<"Case "<<i<<": "<<r<<endl;
    }

    return 0;
}
