#include<bits/stdc++.h>
using namespace std;
int binary_search(int l,int h,int b,int a[]){
if(h<l)
    return -1;
int m;
m=ceil((l+h)/2);

if(b==a[m]){
   return m;}
else if(b>a[m])
{
    binary_search(m+1,h,b,a);
}
else
    binary_search(l,m-1,b,a);
}

int main(){
int n,k;
cin>>n;
int l=0,h=n-1,m,a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
cin>>k;
int b[k];
for(int i=0;i<k;i++)
{cin>>b[i];}
for(int i=0;i<k;i++){
int v=binary_search(l,h,b[i],a);
cout<<v<<" ";}
//return 0;
}

