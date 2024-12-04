#include<iostream>
using namespace std;
int search(int arr[],int sz,int target){
    for (size_t i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
            /* code */
        }
        
        /* code */
    }
    return -1;
    
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int sz = 7;
    int target = 4;
    cout<<search(arr, sz,target);
    return 0;
}