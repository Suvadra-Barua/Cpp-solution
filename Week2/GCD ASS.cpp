#include<bits/stdc++.h>
using namespace std;
long long int GCD(long long int a,long long int b){
    int ap;
ap=a%b;
if(ap==0)
    return b;
else
    GCD(b,ap);
}

int main(){
long long int a,b,k,r;
cin>>a>>b;
if (a==0 || b==0)
    cout<<"0"<<endl;

else if(a>b)
{
    if(a%b==0)
        cout<<a<<endl;
    else{
       k=GCD(a,b);
       r=b/k;
       cout<<a*r<<endl;
    }


}

else
   {

    if(b%a==0)
        cout<<b<<endl;
    else{
       k=GCD(b,a);
       r=a/k;
       cout<<b*r<<endl;
    }
   }
}
