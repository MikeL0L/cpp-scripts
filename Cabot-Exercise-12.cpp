#include <iostream>
#include <stack>
#include <string>
using namespace std;


template <typename T>

void printStack(stack<T> s) {
    
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop(); 
        
        if (!s.empty()) {
            cout << s.top() << " "; 
            s.pop(); 
        }
    }
    cout << endl;
}

int main() {
    stack<int> numStack;
    numStack.push(60);
    numStack.push(40);
    numStack.push(20);

    stack<string> wordStack;
    wordStack.push("Overload");
    wordStack.push("Pares");

    cout << "Stack of Integers (numStack): ";
    printStack(numStack);

    cout << "Stack of Strings (wordStack): ";
    printStack(wordStack);

    return 0;
}