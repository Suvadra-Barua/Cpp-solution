#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int integer(char a){
return int(a)-48;
}
long long int operation(long long int a,char op,long long int b){
if(op=='+')
    return a+b;
else if(op=='-')
    return a-b;
else if(op=='*')
    return a*b;
}

long long int operationMinus(long long int a,char op,long long int b){
if(op=='+')
    return -a+b;
else if(op=='-')
    return -a-b;
else if(op=='*')
    return (-a)*b;
}

long long int maxim(long long int maximum,long long int a,long long int b,long long int c,long long int d){
long long int m=-INT_MAX;
if(a>m)
    m=a;
if(b>m) m=b;
 if(c>m) m=c;
 if(d>m) m=d;
 if(maximum>m) m=maximum;
return m;
}

long long int minim(long long int minimum,long long int a,long long int b,long long int c,long long int d){
long long int m=INT_MAX;
if(a<m)
    m=a;
if(b<m) m=b;
if(c<m) m=c;
if(d<m) m=d;
 if(minimum<m) m=minimum;
return m;
}

int main(){
string s;
long long int a,b,c,d;
int n,k;
cin>>s;
if(s[0]=='-'){
 n=((int)s.size()/2);
 k=1;
}
else{
n=((int)s.size()/2)+1;
k=0;
}
//cout<<n<<endl;
long long int mini[n][n],maxi[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        maxi[i][j]=0;
        mini[i][j]=0;
    }
}


for(int i=0;i<n;i++){
    mini[i][i]=integer(s[k]);
    maxi[i][i]=integer(s[k]);
    k=k+2;
}

for(int i=1;i<n;i++){
        k=i;
    for(int j=0;j<n-i;j++){
            long long int maximum=-INT_MAX;
            long long int  minimum=INT_MAX;
            for(int l=j;l<=k-1;l++){
                    if(s[0]=='-'){
                            if(j==0 && l==0){
                a=operationMinus(maxi[j][l],s[2*l+2],maxi[l+1][k]);
                b=operationMinus(maxi[j][l],s[2*l+2],mini[l+1][k]);
                c=operationMinus(mini[j][l],s[2*l+2],maxi[l+1][k]);
                d=operationMinus(mini[j][l],s[2*l+2],mini[l+1][k]);
                maximum=maxim(maximum,a,b,c,d);
                minimum=minim(minimum,a,b,c,d);

                    }
                    else{
                a=operation(maxi[j][l],s[2*l+2],maxi[l+1][k]);
                b=operation(maxi[j][l],s[2*l+2],mini[l+1][k]);
                c=operation(mini[j][l],s[2*l+2],maxi[l+1][k]);
                d=operation(mini[j][l],s[2*l+2],mini[l+1][k]);
                maximum=maxim(maximum,a,b,c,d);
                minimum=minim(minimum,a,b,c,d);

                    }
                    }
                    else{
                a=operation(maxi[j][l],s[2*(l+1)-1],maxi[l+1][k]);
                b=operation(maxi[j][l],s[2*(l+1)-1],mini[l+1][k]);
                c=operation(mini[j][l],s[2*(l+1)-1],maxi[l+1][k]);
                d=operation(mini[j][l],s[2*(l+1)-1],mini[l+1][k]);
                maximum=maxim(maximum,a,b,c,d);
                minimum=minim(minimum,a,b,c,d);

            }}
            maxi[j][k]=maximum;
            mini[j][k]=minimum;
            k++;

    }
}
/*for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<maxi[i][j]<<"  ";
    }
    cout<<endl;
}
cout<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<mini[i][j]<<"  ";
    }
    cout<<endl;
}*/

cout<<maxi[0][n-1]<<endl;
}
