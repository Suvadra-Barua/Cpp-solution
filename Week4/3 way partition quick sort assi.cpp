#include<bits/stdc++.h>
using namespace std;


vector<int> threepartition(int a[],int l,int h){
int pivot=a[l],j=l,c=0;
vector<int> s;
for(int i=l+1;i<=h;i++){
    if(a[i]<=pivot){
        if(a[i]==pivot){
            //swap(a[i],a[i+1]);
            c++;
        }
        j++;
        swap(a[j],a[i]);

    }
    /*for(int i=l;i<=h;i++){
    cout<<a[i]<<" ";
}
cout<<endl;*/

}
int m=j;
//cout<<m<<endl;
swap(a[l],a[j]);
int i=l;
if(c>0){
 while(i<m){
    while(a[i]<pivot){
        i++;
    }
    while(a[m]==pivot){
        m--;
    }
    if(i<m){
        swap(a[i],a[m]);
    }
 }
 //cout<<i<<" "<<m<<endl;
 s.push_back(i);
 s.push_back(j);
 return s;
 }

 else{
    s.push_back(m);
     s.push_back(m);
     return s;

 }
/* cout<<i<<" "<<j<<endl;
 for(int i=l;i<=h;i++){
    cout<<a[i]<<" ";
 }
cout<<endl;*/
}


void quicksort(int a[],int l,int h){
    vector<int> s;
if(l<h)
    {
       s=threepartition(a,l,h);
       int m1=s[0],m2=s[1];
       if(m1>l && m2<h){
        quicksort(a,l,m1-1);
       quicksort(a,m2+1,h);
       }
       else if(m1<=l){
        quicksort(a,m2+1,h);
       }
       else if(m2>=h){
        quicksort(a,l,m1-1);
       }

       //cout<<"i am quicksort working"<<endl;
    }
}

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
quicksort(a,0,n-1);
int c=1,f=0;
for(int i=0;i<n && i+1<n;i++){
    if(a[i]==a[i+1]){c++;}
    else{c=1;}
    if(c>((float)n/2)){
        f=1;
        break;
    }
}
if(f==1)
    cout<<1<<endl;
else
   cout<<0<<endl;
//cout<<endl;
//return 0;
}
