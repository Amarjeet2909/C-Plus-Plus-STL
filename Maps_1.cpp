//Maps part 1 | It's a data structure which stores key value pairs
/*

In normal map data is stored in sorted order using key value but In Unordered map data does not stored in
sorted order.
- Normal Map uses Red Black Tree to store key values in sorted order
- Every element of a map is pair value which contains key and corresponding value to the key
- Map is not contigious like vector hence we can't use (it+1) for iterator but we can use (it++)
- key values in map are unique
- Insertion and accessing of N values in map takes O(N log N)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    //Map declaration | map<DataType,DataType> Map_Name;
    map <int, string> m;

    //Inserting the value | Method 1
    m[1]= "abc"; // O(log N)
    m[5]= "cdc";
    m[3]= "acd";

    //method 2
    m.insert({4,"afg"}); //or m.insert(make_pair(4,"afg"));

    //printing
    for(auto it= m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}