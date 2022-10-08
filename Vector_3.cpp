//VECTOR PART 3
//vector of vector
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int N;
    cin>>N;
    //It's similar to dynamic 2D Array
    vector<vector<int>> v;
    //Taking Input
    for(int i=0;i<N;i++){
        int n; cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x; cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    //printing vector of vector
    for(int i=0;i<v.size();i++){
        printVec(v[i]);
    }

    return 0;
}