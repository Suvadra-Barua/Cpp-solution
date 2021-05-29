#include<bits/stdc++.h>
using namespace std;

long long int fibonacci(int n){
long long int fn,f1=0,f2=1;
for(int i=2;i<=n;i++){
    fn=f1+f2;
    f1=f2;
    f2=fn;
}
if(n==0)
    return f1;
else if(n==1)
    return f2;
else
    return fn;
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
}
