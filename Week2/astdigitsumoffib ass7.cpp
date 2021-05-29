#include<bits/stdc++.h>
using namespace std;

int fibonacci(long long int m,long long int n){
int fn,f1=0,f2=1,sum=0;
for(long long int i=2;i<=m;i++){

    fn=(f1+f2)%10;
    f1=f2;
    f2=fn;
if(i>=n)
    sum=sum+fn;
    }
if(m==0)
    return f1;
else if(m==1)
    return f2;
else
    return sum%10;
}

int main(){
    long long int n,m;
    cin>>m>>n;
    if(m>n)
        cout<<fibonacci(m,n)<<endl;
    else
        cout<<fibonacci(n,m)<<endl;
}


