#include <bits/stdc++.h>
using namespace std;

#define MAX 100

class Stack{
    int arr[MAX];
    int top;
    
public:
    Stack(){
        top = -1;
    }
    
    bool isEmpty(){
        return top == -1;
    }
    
    bool isFull(){
        return top == MAX - 1;
    }
    
    void push(int val){
        if(isFull()){
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = val;
        cout << val << " Push Into the Stack" << endl;
    }
    
    void pop(){
        if(isEmpty()){
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << arr[top--] << " Popped Elements"<< endl;
    }
    
    void peek(){
        if(isEmpty()){
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << arr[top] << endl;
    }
    
    void traverse(){
        if(isEmpty()){
            cout << "Stack Underflow" << endl;
            return;
        }
        
        cout << "Stack top to bottom" << endl;
        for(int i = top; i >= 0;i--){
            cout << arr[i] <<" ";
        }
        cout << endl;
    }
    
    void search(int val){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return;
        }
        
        for(int i = top; i >= 0; i--){
            if(arr[i] == val){
                cout << "The Position of the Searched Element is at: "<< (top - i + 1) << endl;
                return;
            }
        }
        cout << "Element Not Found" << endl;
    }
    
    void getSize(){
        cout << "Size of the stack is: " << top + 1 <<endl;
    }
};

int main() {
    
    Stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    
    s.peek();
    
    s.traverse();
    
    s.search(20);
    
    s.getSize();
    
    s.pop();
    
    s.traverse();
    
    s.getSize();
    
    return 0;
    // your code goes here
}
