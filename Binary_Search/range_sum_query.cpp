#include<bits/stdc++.h>
using namespace std;
int main(){

int n,q;
cin>>n>>q;
vector<long long int>a(n+1);
for(int i=1;i<=n;i++){
    cin>>a[i];
}
vector<int>pre(n+1);

pre[1]=a[1];
for(int i=2;i<=n;i++){
   pre[i]=pre[i-1]+a[i]; 
}

int l,r;
    while(q--){
        long long int sum;
        cin>>l>>r;
        if(l==1){
            sum=pre[r];
        }else{
            sum=pre[r]-pre[l-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}
