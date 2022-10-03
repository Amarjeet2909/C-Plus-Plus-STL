//VECTOR PART 1
using namespace std;
#include <bits/stdc++.h>
using namespace std;

// $Vector: It's an array of dynamic size.

//Printing vector
void printVec(vector<int> v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // v.size() : T.C: O(1)
}

int main(){
    
    //Declaration
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x); // T.C: O(1)
    }
    printVec(v);

    /* declaring vector with fixed size
    vector<int> v1(10);
    : with fixed size and intialized vale: vector<int>v2(10,2);
    above intialization will create the vector of size 10 with initialized value 2

    v.pop_back(): remove the last value : O(1)

    copy the vector: vector<int> v2= v; O(n) */

    return 0;
}