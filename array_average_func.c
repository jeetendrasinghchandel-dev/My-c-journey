#include<stdio.h>
double avg(double arr[],int length);
int main(){
    double arr1[] = {3.4,4.3,4.4,5.7,7.8};
    double arr2[] = {10.2,20};
    double arr3[] = {10,20,-20,40};
   
printf("arr1 avg :%.2lf\n",avg(arr1,5));
        printf("\n");
printf("arr1 avg :%.2lf\n",avg(arr2,2));
        printf("\n");
printf("arr1 avg :%.2lf\n",avg(arr3,4));

     return 0;
}
double avg(double arr[],int length){
double sum = 0;

for(int i = 0;i < length;i++){
    sum = sum + arr[i];
printf("arr[%d] = %.2lf\n sum = %.2lf\n",i,arr[i],sum);
}
    return sum / length;
}
