/* Upper Bound and Lower Bound in C++ STL
-> Lower Bound: if that element present then will retuen that otherwise will retuen greater than it
-> Upper Bound: if that element present or not does't matter it will always return greater element
-> In case of Array it will retuen pointer of that position
-> In case of vector it will return Iterator
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[5]= {10,20,30,90,100};
    sort(A,A+5);
    for(int i=0;i<5;i++)
    cout<<A[i]<<" ";
    cout<<endl;

    //Declaring the pointer and geeting the lower bound in it
    int *ptr = lower_bound(A,A+5,19); //If we put value that is greater than all the elements exist in Array then it will return pointer of Nth Location
    cout<<(*ptr)<<endl;

    //Declaring the pointer and geeting the upper bound in it
    int *ptr1 = upper_bound(A,A+5,30);
    cout<<(*ptr1)<<endl;

    //both function works in O(log N) time where N is size of the Array

    //Upper & Lower bound function in case of Vector
    vector<int> v= {1,4,2,6,8,};
    sort(v.begin(),v.end());
    //printing the vector
    for(auto it : v){
        cout<<(it)<<" ";
    }
    cout<<endl;
    //Declaring the pointer and geeting the lower bound in it
    auto it = lower_bound(v.begin(),v.end(),5);
    cout<<(*it)<<endl;
    cout<<endl;

    //Upper & Lower bound function in case of Set
    set<int> s;
    s.insert(3);
    s.insert(5);
    s.insert(1);
    s.insert(7);
    s.insert(2);

    //Declaring the pointer and geeting the lower bound in it  
    auto it2 = s.lower_bound(4);


    //Upper & Lower bound in case of map | Here upper & lower bounds will be on keys
    map<int,int> m;
    m.insert({1,12});
    m.insert({7,21});
    m.insert({10,25});
    m.insert({3,27});
    m.insert({6,29});

    //Declaring the pointer and geeting the lower bound in it 
    auto it1= m.lower_bound(7);

    return 0;
}

//Like this upper & lower bound is also possible in the case of pairs etc.

//Next topic- Inbuilt algos in C++