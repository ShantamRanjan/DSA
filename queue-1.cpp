#include<iostream>
using namespace std;
#define n 20
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
    void push(int x){//push function for queue
        if (back==n-1)
        {
            cout<<"queue is full"<<endl;
            return;
            /* code */
        }
        back++;
        arr[back] = x;
        if (front==-1)//it is used when element is added in the start
        {
            front++;   /* code */
        }                                                                                                                                       
    }
    void pop(){
        if (front==-1 || front>back)
        {
            cout<<"queue is empty"<<endl;
            return; 
        }
        front++;
    }
    int peek(){
         if (front==-1 || front>back)
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    cout<<q.peek()<<endl;
    cout<<q.peek()<<endl;
    cout<<q.peek()<<endl;
    return 0;
}
