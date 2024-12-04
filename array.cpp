#include <iostream>
using namespace std;
int main(){
    int marks[5] = {90,100,80,60,33};
    int size = 5;
    cout<<marks[0];
    int sz = sizeof(marks)/sizeof(int);
    cout<<sz;
    for (int i = 0; i < size ;i++)
    {
        cout<< marks[i]<<endl;
        /* code */
    }
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (marks[i]<smallest)
        {
            smallest = marks[i];
            /* code */
        }

        
        /* code */
    }
    cout<<smallest;
    
    
    return 0;
}
