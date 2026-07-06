#include<stdio.h>
int main(){
    double arr1[] = {3.4,5.3,5.4,6.5,4.3};
    double sum = 0;
    double average = 0;

    for(int i = 0; i < 5;i++){
        sum  = sum + arr1[i];
        printf("arr1[%d] = %.2lf\nsum = %.2lf\n",i,arr1[i],sum);
    }
    average = sum / 5;
    printf("average = %.2lf",average);
    return 0;
}