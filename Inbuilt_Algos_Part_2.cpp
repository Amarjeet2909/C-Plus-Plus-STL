#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {-2,4,5,};

    //Lambda Functions | Syntax: [](Parameters){working}
    cout<< [](int x){return x+2;}(4) <<endl; //Here (4) is calling part

    //We can store Lambda function in a variable to use it later on
    auto sum = [](int x, int y){return x+y;};
    cout<< sum(2,3) << endl; //calling

    //all_of Algorithms | Here we're passing Lambda function as a parameter but Instead of this we can aslo pass normal function
    // It will return true only if all the values in vector v is +ve otherwise return false
    cout<< all_of(v.begin(),v.end(), [](int x){return x > 0;})<<endl;

    // any_of Algorithm | Here as we can see from name if any value will +ve it will return true otherwise false
    cout<< any_of(v.begin(),v.end(), [](int x){return x > 0;})<<endl;

    //Similarly in none_of Algorithm It will retuen true if no one will satisfy the function

    return 0;
}