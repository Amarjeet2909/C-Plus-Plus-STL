//VECTOR PART 2
#include <bits/stdc++.h>
using namespace std;

//printing the vector pair
void printVec(vector<pair<int,int>> &v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second;
    }
    cout<<endl;
    // v.size() : T.C: O(1)
}

//printing the Arrays of vector
void printVec1(vector<int> &v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    /*---------------------------------------------------------
    //vector<pair<int,int>> v= {{1,2},{2,3},{4,5}};
    vector<pair<int,int>> v;
    printVec(v);
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y}); //or v.push_back(make_pair(x,y));
    }
    printVec(v);
    ------------------------------------------------------------- */

   // # Arrays of vector:
    int N;  cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++){
        int n;  cin>>n;
        for(int j=0;j<n;j++){
            int x; cin>>x;
            v[i].push_back(x);
        }
    }
    //printing arrays of vector
    for(int i=0;i<N;i++){
        printVec1(v[i]);
    }
    return 0;
}