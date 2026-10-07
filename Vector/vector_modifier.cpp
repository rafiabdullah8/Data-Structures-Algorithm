#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>v={1,2,3,4};

//#1: PUSH BACK
v.push_back(10); 
cout<<"Push_back: "<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";

}
cout<<endl;
//#2: POP BACK
v.pop_back();
cout<<"Pop_back"<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

//#3: INSERT.
v.insert(v.begin()+1,100);
cout<<"Insert: "<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

//#4: ERASE.

v.erase(v.begin()+1,v.begin()+3);
cout<<"Erase: "<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
    return 0;
}
