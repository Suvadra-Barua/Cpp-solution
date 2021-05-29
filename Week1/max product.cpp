#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,mx,hmx,j;
cin>>n;
long long int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];

}
j=0;
hmx=a[0];
mx=-1;
for (int i=1;i<n;i++){
if(a[i]>hmx){
    mx=hmx;
    hmx=a[i];
    j=i;
}
}
//cout<<hmx<<" "<<mx<<endl;
for(int i=j+1;i<n;i++){
    if(a[i]>mx)
        mx=a[i];
}

/*for(int i=0;i<n;i++){
    if(a[i]>a[i+1]){

        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;

    }


}*/
//for(int i=0;i<n;i++){
   // cout<<a[i]<<" ";
//}
if(mx==-1)
    cout<<hmx<<endl;
else
cout<<hmx*mx<<endl;

//double k=(double)clock();
//cout<<k;
}
