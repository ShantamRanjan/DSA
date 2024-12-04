#include<iostream>
using namespace std;
#define n 100
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x){
        if (back==-1)
        {
            cout<<"overflow"<<endl;
            return;
            /* code */
        }
        back++;

        arr[back]=x;
        if (front==-1)
        {
            /* code */
            front++;
        }
        
    }
    void pop(int x){
        if (front == -1 || front>back)
        {
            cout<<"not available"<<endl;
            return;
            /* code */
        }
        front++;
    }
    int peek(){
        if (front == -1 || front>back)
        {
            cout<<"not available"<<endl;
            return -1;
            /* code */
        }
        return arr[front];
    }
    bool empty(){
        if (front == -1 || front>back)
        {
            cout<<"not available"<<endl;
            return true;
            /* code */
        }
        return false;
    }
};