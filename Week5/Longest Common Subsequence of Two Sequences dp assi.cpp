#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,sub=0;//n1=n-1,n2=m-1,sub,f1=1,f2=1;
cin>>n;
long long int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>m;
long long int b[m],ed[n][m];
for(int i=0;i<m;i++){
    cin>>b[i];
}
//cout<<"hocche"<<endl;
/*while(a[n1]==b[n2] && n>0 && m>0){
    n--;
    m--;
    n1--; n2--;
}
cout<<"hocche"<<endl;
n1=0,n2=0;
while(a[n1]==b[n2] && n>n1 && m>n2){
    n1++;
    n2++;
}
cout<<"hocche"<<endl;
long long int ed[n][m];//you should reduce it to n-n1+1 and m-n2+1
if(n==n1 && m==n2){
    sub=0;
}
else if(n==n1){
    sub=m-n2;
}
else if(m==n2){
    sub=n-n1;
}
else{*/
    cout<<m<<endl;
for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
             if(i==0){
                ed[i][j]=j;
                //f1++;
            }
            else if(j==0){
                ed[i][j]=i;
                //f2++;//
            }
            else if(i!=0 && j!=0){
                if(a[i-1]==b[j-1]){
                    ed[i][j]=ed[i-1][j-1];
                }
                else{
                    ed[i][j]=min(ed[i-1][j],min(ed[i-1][j-1],ed[i][j-1]))+1;
                }
            }
        }}

    sub=ed[n][m];
/*for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
            cout<<ed[i][j]<<" ";}
    cout<<endl;}*/
cout<<max(n,m)-sub<<endl;
}
