#include<stdio.h>
int main(){
    int myarray[] = {1,2,3,4,5,6,7,8,9};
    int length = 9;
    int temp;

    for(int i = 0; i < (length/2); i++){
        temp = myarray[i];
        myarray[i] = myarray[length - i - 1];
        myarray[length - i - 1] = temp;
    }
    for(int i = 0;i < length;i++)
     printf("myarray[%d] = %d\n" , i ,myarray[i]);
    printf("\n");
    
    return 0;

}