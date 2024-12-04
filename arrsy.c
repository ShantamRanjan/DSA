#include <stdio.h>
#include <stdlib.h>
struct myarray
{
    int totalsize;
    int usedsize;
    int *ptr;
    /* data */
};
void createarray(struct myarray *a, int tsize,int usize){
    a->totalsize = tsize;
    a->usedsize = usize;
    a->ptr = (int *)malloc(tsize*sizeof(int));
     
}
void show(struct myarray *a){
    for (int i = 0; i < a->usedsize ; i++)
    {
        printf("%d\n",(a->ptr)[i]);
        /* code */
    }
    
}
void setval(struct myarray *a){
    int n;
    for (int i = 0; i < a->usedsize; i++)
    {
        printf("enter elements %d", i ," :");
        scanf("%d", &n);
        (a->ptr[i])=n;
        /* code */
    }
    
}
int main(){
    struct myarray marks;
    createarray(&marks,10,2);
    setval(&marks);
    show(&marks);
    return 0;
}
