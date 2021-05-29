#include<bits/stdc++.h>
using namespace std;
int main(){
int t,capacity,capacity1,k;
cin>>t>>capacity;
int value[t],weight[t];
double unit[t],sum=0;
for(int i=0;i<t;i++){
    cin>>value[i]>>weight[i];
    unit[i]=(double)value[i]/weight[i];
    //cout<<unit[i]<<endl;
}
while(capacity>0){
   double max=0;
   for(int i=0;i<t;i++){
    if(unit[i]>max){
         max=unit[i];
         //cout<<max<<endl;
         k=i;
    }}
     if(weight[k]>=capacity){
            //cout<<sum<<"hiii"<<endl;
        sum=sum+unit[k]*capacity;
        //cout<<sum<<"hi"<<endl;
        capacity=0;
     }
     else
     {
         capacity=capacity-weight[k];
         sum=sum+unit[k]*weight[k];
         //cout<<sum<<"hiii guilty"<<weight[k]<<endl;
     }
     unit[k]=0;
   }


cout<<fixed<<setprecision(4)<<sum<<endl;
}
