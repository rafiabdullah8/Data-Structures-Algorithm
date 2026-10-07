#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
int flag=0;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int value;
cin>>value;
int l=0;
int r=n-1;
while(l<=r){
   int mid=(l+r)/2;
    if(a[mid]==value){
        flag=1;
        break;
    }
    else if(a[mid]<value){
      l=  mid+1;
    }else{
       r= mid-1;
    }
}

if(flag==1){
    cout<<"Found";
}else{
    cout<<"Not Found";
}
    return 0;
}
