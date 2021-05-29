#include<bits/stdc++.h>
using namespace std;

int fibonacci(long long int n){
int m,d,sum=1;
m=n%60;
d=60-m;

int k=ceil(n/60);
int fn;
int f0=0;
//cout<<f[0]<<endl;
int f1=1;
if(n>60 && m>=1){
    sum=k;
}
for(int i=2;i<=60;i++){
   fn=(f0+f1)%10;
     cout<<"fi"<<" "<<i<<" "<<fn<<endl;
     //sum=(sum+fn);
    if(n<=60){
         sum=(sum+fn)%10;
         if(i==n)
            break;
         //cout<<sum<<endl;
    }
    else{
            if(i<m)
        sum=(sum+fn*k)%10;
           else
           sum=(sum+fn)%10;
        //cout<<"sum"<<sum<<endl;
}
f0=f1;
f1=fn;
}
if(n==0)
    return f0;
else if(n==1)
    return f1;
else
    return sum%10;
}

int main(){
    long long int n;
    cin>>n;
    //fibonacci(n);
    cout<<fibonacci(n)<<endl;
}

