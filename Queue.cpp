#include <bits/stdc++.h>
using namespace std;

int main(){
    // declaration
     queue<string> q;
    // Insertion (push)
     q.push("Amar");
     q.push("Aditya");
     q.push("Devanshu");

     //Printing the queue
     while(!q.empty()){
        cout << q.front() << endl;
     }
     // deleting (pop)
     q.pop(); //this will delete the earliest pushed element.

    return 0;
}