#include<stdio.h>

int find_max(int myarray[],int length);

int main(){
int myarray[] = {2,4,67,68,53,5,5};

int max = find_max(myarray, 7);
printf("maximum: %d",max);
return 0;
}
int find_max(int myarray[],int length){
    int max = myarray[0];
    for(int i=0;i<length;i++){
        printf("\ncheaking myarray[%d] = %d\n ",i,myarray[i]);
        if(myarray[i] > max){
        max = myarray[i];
          printf("New found:%d\n",max);
        }
    }
    return max;
}