#include<iostream>
using namespace std;
# define n 100
class stack
{
private:
    int* arr;
    int top;
    /* data */
public:
    stack(){
        arr = new int[n];
        top = -1;
    }
    void push(int x){
        if (top == n-1)
        {
            cout<<"stack overflow"<<endl;
            return;
            /* code */
        }
        top++;
        arr[top] = x;
        
    }
    void pop(){
        if (top == -1)
        {
            cout<<"nothing available"<<endl;
            return;
            /* code */
        }
        top--;
    }
    int top(){
        if (top == -1)
        {
            cout<<"nothing available"<<endl;
            return;
            /* code */
        }



        return arr[top];
    }
};   
