#include<stdio.h>
void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
        /* code */
    }
    
}
int indinsertion(int arr[], int size, int element , int capacity, int index){
    if (size>=capacity)
    {
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
        /* code */
    }
    arr[index] = element;
    return 1;    
}
int main(){
    int arr[100] = {7,8,12,78};
    int size = 5, element = 45, index =3;
    display(arr,4);
    indinsertion(arr,size,element,100,index);
    size+=1;
    display(arr,size);
    return 0;

}