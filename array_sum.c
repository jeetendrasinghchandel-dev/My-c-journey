#include<stdio.h>
int main(){
    int myarray[] = {1,2,3,4,6,4,8,9,7};
    int sum = 0;
    for(int i = 0; i < 9;i++){
        sum = sum + myarray[i];
        printf("myarray[%d] = %d\n",i ,myarray[i]);
        printf("sum so far:%d\n",sum);
    }
    return 0;
}