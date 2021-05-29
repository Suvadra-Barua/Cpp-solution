#include<bits/stdc++.h>
using namespace std;
int moneyChange(int n){
int sum=0;
while(n!=0){
if(n<5)
    {return sum+n;
    break;}
else if(n>=5 && n<10){
    sum=sum+1+n-5;
    return sum;
    break;}
else if(n>=10){
sum=(int)(n/10);
n=n%10;
if(n==0){
    return sum;
}
}
}}

int main(){
int n;
cin>>n;
cout<<moneyChange(n)<<endl;
}
