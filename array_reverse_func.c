#include<stdio.h>
void reverse(int myarray[] , int length);
int main(){
    int myarray1[] = {1,2,3,4,7,6,8,9,5};
    int myarray2[] = {2,4,6,3,9,7,6,5};
    reverse(myarray1,9);
    reverse(myarray2,8);
  for(int i = 0;i < 9;i++)
    printf("myarray1[%d] = %d\n",i ,myarray1[i]);

    printf("\n");

for(int i = 0;i < 8;i++)
    printf("myarray2[%d] = %d\n",i ,myarray2[i]);
  
return 0;

}
void reverse(int myarray[], int length){
    int temp = 0;
    for(int i = 0;i < (length/2); i++){
        temp = myarray[i];
        myarray[i] = myarray[length - i -1];
        myarray[length - i - 1] = temp;
    }
}