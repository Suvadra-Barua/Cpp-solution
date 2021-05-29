#include<bits/stdc++.h>
using namespace std;

/*void maximum(int n,int a[][n],int k,int j,int w)
{
int maxi=0;
if(a[k-1][j]+a[j][j]>maxi && a[k-1][j]+a[j][j]<=w){
    maxi=a[k-1][j]+a[j][j];
}
if(a[k][j-1]+a[k][k]>maxi && a[k][j-1]+a[k][k]<=w){
    maxi=a[k][j-1]+a[k][k];
}
if(a[k][j-1]>maxi && a[k][j-1]<=w){
    maxi=a[k][j-1];
}
if(a[k-1][j]>maxi && a[k-1][j]<=w){
    maxi=a[k-1][j];
}
return maxi;
}*/

int main(){
    int w,n;
    cin>>w>>n;
    int a[n][n];
     for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        a[i][j]=0;
    }

}
    for(int i=0;i<n;i++){
        cin>>a[i][i];
    }
    int k=0;
    for(int j=1;j<=n-1;j++){
            int p;
      p= a[k][j-1]+a[k+1][j];
    if(p>w)
        a[k][j]=max(a[k][j-1],a[k+1][j]);
    else
        a[k][j]=p;
       k++;
    }



    for(int i=1;i<=n-2;i++){
             k=0;
        for(int j=i+1;j<=n-1;j++){
                int maxi=0;
if(a[k+1][j]+a[k][k]>maxi && a[k+1][j]+a[k][k]<=w){
    maxi=a[k+1][j]+a[k][k];
}
if(a[k][j-1]+a[j][j]>maxi && a[k][j-1]+a[j][j]<=w){
    maxi=a[k][j-1]+a[j][j];
}
if(a[k][j-1]>maxi && a[k][j-1]<=w){
    maxi=a[k][j-1];
}
if(a[k+1][j]>maxi && a[k+1][j]<=w){
    maxi=a[k+1][j];
}

            a[k][j]=maxi;
            k++;
        }
    }
/*for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}*/
    cout<<a[0][n-1]<<endl;
}
