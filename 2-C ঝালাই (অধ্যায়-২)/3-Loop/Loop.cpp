//counts how many 2 divides 100
int x=100,count=0;
while (x%2==0){
    x/=2;
    count++;
}

//EOF=End of file
//C
int a;
while (scanf("%d",&a)!=EOF){
if(a==0){
break;
    }
printf("%d\n",a);
}

int a;
while (scanf("%d",&a)!=EOF&& a){    
    printf("%d\n",a);
}

//C++
int a;
while (cin>>a){
    if(a==0){
        break;
    }
    cout<<a<<endl;
 }


int a;
while (cin>>a && a){
    cout<<a<<endl;
}

//1+ (1+2) + (1+2+3) +…. + (1+2+3+…+n)

int n,sum=0;
cin>>n;

for(int i=1;i<=n;i++){
    cout<<"Sum of "<<i<<":";
    for(int j=1;j<=i;j++){
        sum+=j;
    }
    cout<<sum<<endl;
}
