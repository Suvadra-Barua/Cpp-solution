#include<bits/stdc++.h>
using namespace std;

/*int mincoin(int n,int minimum[]){
if(n>=0 && n<3){
    minimum[n]=n;
    //return 0;
    }
else if(n==3 || n==4){
    minimum[n]=1;
    //return 0;
    }
/*else if(n<0)
return 0;
    //minimum[n]=n+100;
else if(n>4)
{/*minimum[n-1]=mincoin(n-1,minimum);
minimum[n-3]=mincoin(n-3,minimum);
minimum[n-4]=mincoin(n-4,minimum);
    minimum[n]=min(min(mincoin(n-1,minimum)+1,mincoin(n-3,minimum)+1),mincoin(n-4,minimum)+1);
//cout<<minimum[n]<<" ";
//return 0;
}
//return 0;
}*/

int main(){
int n;
cin>>n;
int minimum[n];
//mincoin(n,minimum);
for(int i=0;i<=n;i++)
{
   if(i>=0 && i<3){
    minimum[i]=i;
    //return 0;
    }
else if(i==3 || i==4){
    minimum[i]=1;
    //return 0;
    }
else if(i>4){
    minimum[i]=min(min(minimum[i-1]+1,minimum[i-3]+1),minimum[i-4]+1);
}
}
cout<<minimum[n]<<endl;
}
