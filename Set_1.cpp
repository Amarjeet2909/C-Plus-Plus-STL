/*
Types of Set: 1. Set
              2. Unordered set
              3. multisets
$Set:-
-> set inserts only unique elements
-> set inserts data in sorted order
-> internal implmentation of set done by red black trees
*/
//set
#include <bits/stdc++.h>
using namespace std;

//Printing the set
void print(set<string> &s){
    //method 1
    for(string value: s){
        cout<<value<<" ";
    }
    //method 2
    for(auto it= s.begin(); it!=s.end(); it++){
        cout<<(*it)<<" ";
    }
}

int main(){
    //Declaration
    set<string> s;
    //Insertion of element
    s.insert("Amar"); // log(N)
    s.insert("Ayush");
    s.insert("Yuva");
    s.insert("Amar");

    //Accessing the elements
    auto it = s.find("Ayush");
    if(it!= s.end()){
        cout<<(*it)<<"\n";
    }

    //erase(): similar rules like map

    print(s);

    return 0;
}

/*
$ Unordered Set:- 
-> Insertion and accessing will be done in O(1) time
Declaration: unordered_set<string> s;
-> Internal implementation done by Hash Table
-> Here also elements will be unique
-> other functionalities will be similar as Set
-> elements are not stored in sorted order

$ Multiset:-
Declaration: multiset<string> s;
-> Internally uses Red black tree 
-> It allows single vslued to insert multiple times
-> TC for Insertion, Accessing will be O(log N) again

*/