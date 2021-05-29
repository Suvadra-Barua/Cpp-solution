#include<bits/stdc++.h>
using namespace std;
int main(){
string a,b;
cin>>a>>b;

int l1=a.size(),l2=b.size(),f,need1=l1-1,need2=l2-1,f1=1,f2=1,k,check,need3;
int ed[l1+1][l2+1];
while(a[need1]==b[need2] && l1>0 && l2>0){
        //cout<<a[need1]<<" "<<b[need2]<<endl;
    l1=l1-1;
    l2=l2-1;
    need1--;
    need2--;
}
need1=0,need2=0;
while(a[need1]==b[need2] && l1>need1 && l2>need2 ){
    need1++;
    need2++;
}
//cout<<l1<<" "<<l2<<" "<<need1<<" "<<need2<<endl;
if(l1==0 && l2==0){
    cout<<0<<endl;
}
else if(l1==need1){
    cout<<l2-need2<<endl;
}
else if(l2==need2){
    cout<<l1-need1<<endl;
}

else if(l1!=need1 && l2!=need2){
for(int i=need1;i<=l1;i++){
//f=0;

//k=i;
//check=a[k-1];
//need3=f;
//cout<<"something"<<endl;
    for(int j=need2;j<=l2;j++){

        if(i==need1 && j==need2){
            ed[i][j]=0;
        }
        else if(i==need1){
            ed[i][j]=f2;
            f2++;
            //f=0;
        }
        else if(j==need2){
            ed[i][j]=f1;
            f1++;
            //f=0;

        }

        else{

               ed[i][j]=min(min(ed[i][j-1],ed[i-1][j-1]),ed[i-1][j])+1;
              /* if(a[i-1]==b[j-1] ){
                    f=need3;
                for(;k>=2;){
             if(check==a[k-2]){
                f=1;

                break;}

                k--;
               }
               }
               if(f==1){k=k-1;}*/
             //cout<<i<<" "<<j<<" "<<k<<" "<<f<<endl;
           //cout<<need1<<" "<<need2<<" "<<f<<endl;
            if(a[i-1]==b[j-1]){
                ed[i][j]=ed[i-1][j-1];
                //f=1;
                //need3=f;
               // need1=i;
                //need2=j;
            }



        }


    }
}
//cout<<l1<<" "<<l2<<" "<<need1<<" "<<need2<<endl;
/*for(int i=need1;i<=l1;i++){
    for(int j=need2;j<=l2;j++){
            cout<<ed[i][j]<<" ";}
    cout<<endl;}
/*if(ed[l1][l2-1]==ed[l1-1][l2] && ed[l1-1][l2]==ed[l1-1][l2-1]){
                 ed[l1][l2]=ed[l1][l2]-1;
            }*/
cout<<ed[l1][l2]<<endl;
}}

