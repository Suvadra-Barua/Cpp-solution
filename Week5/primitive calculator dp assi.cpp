#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n+1];
a[0]=0;
a[1]=0;
for(int i=2;i<=n;i++){

    a[i]=1+a[i-1];
    if(i%2==0) a[i]=min(a[i],1+a[i/2]);
    if(i%3==0) a[i]=min(a[i],1+a[i/3]);
}
int b[a[n]+2],i=n;
b[0]=n;
int j=1;
    while(i>1 && j<=a[n]+1){
    if(a[i]==1+a[i/2])
        b[j]=i/2;
    else if(a[i]==1+a[i/3])
        b[j]=i/3;
    else
        b[j]=i-1;

      i=b[j];
      j++;
        }


cout<<a[n]<<endl;
for(int i=a[n];i>=0;i--)
    cout<<b[i]<<" ";

}
