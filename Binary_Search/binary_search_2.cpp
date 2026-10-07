#include<bits/stdc++.h>
using namespace std;
int main(){

int n,q;
cin>>n>>q;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
int value;

for(int i=0;i<q;i++){
    cin>>value;
    int l=0;
    int r=n-1;
    int mid;
    int flag=0;
    while(l<=r){

        mid=(l+r)/2;
        if(a[mid]==value){ 
            flag=1;
            break;
        }
        else if(a[mid]<value){
            l=mid+1;
        }else if(a[mid]>value){
            r=mid-1;
        }
    }
   if(flag==1){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
   
}
 return 0; 
}
