#include<stdio.h>
int sum(int myarray[], int length);
int main(){
   
    int myarray1[] = {1,2,3,4,6,4,8,9,7};
    int myarray2[] = {100,200,45};

for(int i=0;i<9;i++){
      printf("myarray1[%d] = %d\n",i,myarray1[i]);
         printf("myarray1 sum: %d\n",sum(myarray1,9));
    }
                printf("\n");
for(int i=0;i<3;i++){
  printf("myarray2[%d] = %d\n",i,myarray2[i]);
     printf("myarray2 sum: %d\n",sum(myarray2,3));
}
return 0;
}
int sum(int myarray[], int length){
int sum_value = 0;
    for(int i = 0; i < length;i++)
        sum_value = sum_value + myarray[i];
      
return sum_value;

}