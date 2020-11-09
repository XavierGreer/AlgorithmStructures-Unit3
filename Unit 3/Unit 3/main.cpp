//
//  main.cpp
//  Unit 3
//
//  Created by Xavier Greer on 8/15/20.
//  Copyright © 2020 Xavier Greer. All rights reserved.
//  reference techiedelight for submission 2 assistance

#include <stack>
#include <iostream>
#include <array>
#include <queue>
using namespace std;


//----Submission 1----
//
//int main(int argc, const char * argv[]) {
//
//    //  create a stack named books that stores integers
//    stack<int> books;
//
//    //  Used the method push() to add the BookIDs into the top of the stack.
//    books.push(1000);
//    books.push(2000);
//    books.push(3000);
//    books.push(4000);
//
//    //  Used the method pop() to remove all the elements in te stack starting from the top
//    books.pop();
//    books.pop();
//    books.pop();
//    books.pop();
//
//    cout<<"The size of the stack, books, is "<<books.size()<<"\n";
//
//    return 0;
//}


//  ----Submission 2----

int main(int argc, const char * argv[]) {
    
    queue<string> q;
    
    q.push("Bonnai");
    q.push("Tim");
    q.push("Jerry");
    q.push("Tom");
    
    //  Display the data at the front of the queue
    cout << "At the front of the Queue is " << q.front() << endl;
    
    //  Display the data at the rear of the queue
    cout << "At the rear of the queue is " << q.back() << endl;

    return 0;
}
