// Maps part 2
#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int, string> m;
    m[1]= "abc";
    m[5]= "cdc";
    m[3]= "acd";

    for(auto it= m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    // find(): It's used to find a value in map and It returns Iterator
    auto it = m.find(7); //O(log N)
    if(it==m.end()){
        cout<<"No Value\n";
    }
    else{
        cout<<it->first<<" "<<it->second<<"\n";
    }
    // erase(): It's used to erase a particular value from map. It takes either that value as a parameter or the Iterator to that element
    m.erase(5); // O(log N)
    // clear(): It's used to clear the entire map
    m.clear();

    return 0;
}
/* Insertion time of element in map depends on the key value suppose if our key value is of type string and the 
size of string is very large then it will not only take O(log N) rather it will ~ s.size() * log(N) time */