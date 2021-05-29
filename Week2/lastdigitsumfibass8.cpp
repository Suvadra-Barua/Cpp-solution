#include<bits/stdc++.h>
using namespace std;

int fibonacci(long long int n){
int fn,f1=0,f2=1,sum=1;
for(long long int i=2;i<=n;i++){
    fn=(f1+f2)%10;
    sum=sum+fn*fn;
    f1=f2;
    f2=fn;
}
if(n==0)
    return f1;
else if(n==1)
    return f2;
else
    return sum%10;
}

int main(){
    long long int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
}


