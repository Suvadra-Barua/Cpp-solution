#include<bits/stdc++.h>
using namespace std;
int main(){
int d,m,n,k,c=0,f=0,last,sum=0;
cin>>d>>m>>n;
k=m,last=d;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    //sum=sum+a[i];
    if(a[i]>last)
        return 0;
}

a[n]=d;
//cout<<a[0]<<endl;
if(a[0]>d)
    {

        f=1;
    }
else if(last<=k)
    f=-1;
else
    {d=d-a[0];
    m=m-a[0];
    int i=0;
while(d>0){
        while(abs(a[i+1]-a[i])<=m){
                //cout<<i<<" "<<abs(a[i+1]-a[i])<<"faltu"<<d<<endl;
            d=d-abs(a[i+1]-a[i]);
            m=m-abs(a[i+1]-a[i]);
            i=i+1;
        }
        if(abs(a[i+1]-a[i])<=k){
                //i=i-1;
                //cout<<"hhi"<<abs(a[i+1]-a[i])<<endl;
                c=c+1;
                m=k;
                d=d-abs(a[i+1]-a[i]);
                m=m-abs(a[i+1]-a[i]);
                i=i+1;
        }
        else if(i+1<=n && abs(a[i+1]-a[i])>k){
         //cout<<abs(a[i+1]-a[i])<<"faltu ELse"<<d<<endl;
           f=1;
           break;}

}
}
if(f==1)
    printf("-1\n");
else if(f==-1)
    printf("0\n");
else
    printf("%d\n",c);
}
