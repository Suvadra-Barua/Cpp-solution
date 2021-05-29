#include<bits/stdc++.h>
using namespace std;

int main(){
int l1,l2;
cin>>l1;
int m=l1;
long long int a[l1];
for(int i=0;i<l1;i++)
    cin>>a[i];
cin>>l2;
int n=l2;
long long int b[l2];
for(int i=0;i<l2;i++)
    cin>>b[i];


int need1=l1-1,need2=l2-1,check=0;
long long int ed[l1+1][l2+1];
while(a[need1]==b[need2] && l1>0 && l2>0){
        //cout<<a[need1]<<" "<<b[need2]<<endl;
    l1=l1-1;
    l2=l2-1;
    need1--;
    need2--;
    check++;
}
need1=0,need2=0;
while(a[need1]==b[need2] && l1>need1 && l2>need2 ){
    need1++;
    need2++;
    check++;
}
//cout<<l1<<" "<<l2<<" "<<need1<<" "<<need2<<endl;
ed[l1][l2]=0;
if(l1==0 && l2==0){
    cout<<check<<endl;
}
else if(l1==need1){
     cout<<check<<endl;
}
else if(l2==need2){
     cout<<check<<endl;
}

else if(l1!=need1 && l2!=need2){
for(int i=need1;i<=l1;i++){

    for(int j=need2;j<=l2;j++){

        if(i==need1 && j==need2){
            ed[i][j]=0;
        }
        else if(i==need1){
            ed[i][j]=0;

        }
        else if(j==need2){
            ed[i][j]=0;
        }

        else{

               ed[i][j]=max(max(ed[i][j-1],ed[i-1][j-1]),ed[i-1][j]);


            if(a[i-1]==b[j-1]){
                ed[i][j]=ed[i-1][j-1]+1;
            }}}
}
cout<<check+ed[l1][l2]<<endl;
}
//cout<<l1<<" "<<l2<<" "<<need1<<" "<<need2<<endl;
/*for(int i=need1;i<=l1;i++){
    for(int j=need2;j<=l2;j++){
            cout<<ed[i][j]<<" ";}
    cout<<endl;}

}
//cout<<check<<" "<<ed[l1][l2]<<endl;*/

}

