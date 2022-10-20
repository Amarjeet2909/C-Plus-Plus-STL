/* $ STACK:- It follows the LIFO principle
     operations possible are: 1. PUSH
                              2. POP
                              3. TOP
   $ QUEUE:- It follows the FIFO 
     oprations possible are:  1. PUSH
                              2. POP
                              3. FRONT

    There can be more operations but this is the basic operations.
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    // declaration
     stack<int> s;
    // Insertion (push)
     s.push(2);
     s.push(4);
     s.push(5);

     //Printing the stack
     while(!s.empty()){
        cout << s.top() << endl;
     }
     // deleting (pop)
     s.pop(); //this will delete the topmost/last inserted element.
    return 0;
}