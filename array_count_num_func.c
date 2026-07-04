#include<stdio.h>
int occurrence(int myarray[],int length,int to_find);
int main(){
    int myarray1[] = {2,2,5,5,5,5,4,3,3};
    int myarray2[] = {1,2,1,2,1,7,8,6,9};
    int findarr1_5 = occurrence(myarray1,9,5);
    int findarr2_1 = occurrence(myarray2,9,1);

    printf("# to 5s in myarray1: %d\n",findarr1_5);
    printf("# to 1s in myarray2:%d\n",findarr2_1);
    return 0;
}
int occurrence(int myarray[],int length,int to_find){
    int count = 0;
    int i;
    for(i = 0;i < length;i++){
    printf("myarray[%d] = %d\n",i,myarray[i]);
   
    if(myarray[i] == to_find)
    count++;}
 printf("found %d incremeted count to:%d\n",count);
  
return count;
    

}