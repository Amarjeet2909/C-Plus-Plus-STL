//Iterator 2
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,3,4,5,6};

    /* Shortcut method of for loop for printing the vector, Here the 'value' variable will only contain the copy of vector 
    values not the actual one. | Range loops */
    for(int value : v){
        cout<<value<<" ";
    }
    // similar method but here the 'value' variable contains actual values
    for(int &value : v){
        cout<<value<<" ";
    }
    //Printing pair using Range loop
    vector<pair<int,int>> vp = {{1,2},{3,4}};
    for(pair<int,int> &value : vp){
        cout<<value.first<<" "<<value.second<<endl;
    }
    /* Instead of declaring iterator like this:- 1. vector<pair<int,int>> :: iterator it;
                                                 2. for(it= v.begin(); it!= v.end(); it++)
    we can directly declare it using 'auto' keyword like this:- for(auto it= v.begin(); it!= v.end(); it++) and 
    can skip (1.) 
    
    In line No 19 Instead of using: for(pair<int,int> &value : vp) we should use: for(auto &value : vp)
    
    */

    return 0;
}