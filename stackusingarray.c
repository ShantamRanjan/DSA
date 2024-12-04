#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    int * arr;
    /* data */
};
int main(){
    struct stack s;
    s.size = 80;
    s.top = -1;
    s.arr = (int *) malloc(sizeof(int));
}
