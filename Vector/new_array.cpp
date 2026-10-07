#include<bits/stdc++.h>
using namespace std;
void concat(vector<int>a,vector<int>b){
    vector<int>c;
    for(int i=0;i<b.size();i++){
        c.push_back(b[i]);
    }
    for(int i=0;i<a.size();i++){
        c.push_back(a[i]);
    }
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }

}
int main(){
    int n;
    cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<int>b(n);
for(int i=0;i<n;i++){
    cin>>b[i];
}

concat(a,b);

    return 0;
}
