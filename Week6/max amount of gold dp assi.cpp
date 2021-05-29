#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[m],maxVW,maxV,remaining_n,wOfG;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    //cout<<"running"<<endl;
   vector< vector< int> >  b(m + 1,vector< int>(n + 1));
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++){
                //cout<<"running"<<endl;
            if(i==0){
                b[i][j]=0;
            }
            else if(j==0){
                b[i][j]=0;
            }
            else{
                maxVW=b[i-1][j];//as in this problem weight and value same.
                maxV=0;
                 wOfG=a[i-1];
                if(j>=wOfG){
                        maxV=wOfG;
                     remaining_n=j-maxV;
                    maxV=maxV+b[i-1][remaining_n];

                }
                b[i][j]=max(maxV,maxVW);
            }
        }
    }
   /* for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cout<<b[m][n]<<endl;
}
