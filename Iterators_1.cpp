//Iterator 1 | Iterator points to the memory location
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Iterator declaration in the case of vector
   /* vector<int> ::iterator it = v.begin();
    for(it= v.begin();it!= v.end(); it++){
        cout<<(*it)<<endl;
    } */

    //using iterator in the case of vector pair
    vector<pair<int,int>> vp = {{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator it;
    for(it=vp.begin();it!=vp.end();it++){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    // (*it).first similar to it->first

    return 0;
}