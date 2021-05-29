#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n;
vector<int> num;
vector<int> c;
for(int i=0;i<n;i++){
        cin>>k;
        num.push_back(k);
        //kum.push_back(k);
}

while(num.size()!=0){
int count=1;
int j=0;
//a.push_back(num[j]);
for(int i=1;i<num.size();i++){
    if(num[j]==num[i]){
        num.erase(num.begin()+i);
        i--;
        count++;

    }
}
num.erase(num.begin()+j);
c.push_back(count);
}
int maxi=c[0];
for(int i=1;i<c.size();i++){
    if(c[i]>maxi){
        maxi=c[i];
    }
}
if(maxi>(float(n)/2))
cout<<1<<endl;
else cout<<0<<endl;
//if you have to find index
/*for(int i=0;i<kum.size();i++){
    if(kum[i]==maxi){
        cout<<i<<endl;
        break;
    }*/
}


