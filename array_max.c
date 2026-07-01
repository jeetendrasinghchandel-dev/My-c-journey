#include<stdio.h>
int main(){
  int myarray[] ={1,4,6,7,12,3};
int max;
max = myarray[0];
for(int i=0;i<6;i++){
    printf("\ncheaking myarray[%d] = %d\n",i,myarray[i]);
    if(myarray[i] > max){
        max = myarray[i];
        printf("New no. found: %d", max);
    }
}
printf("maximum = %d\n", max);
return 0;
}