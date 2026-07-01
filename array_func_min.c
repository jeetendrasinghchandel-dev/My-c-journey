#include<stdio.h>
int find_min(int myarray[],int length);
int main(){
  int myarray[] ={10,4,2,74,12,30};

  int min = find_min(myarray, 6);

   printf("Minimam =%d\n", min);

  return 0;
}
int find_min(int myarray[],int length){

  int min = myarray[0];
  for(int i = 0; i < length; i++){
    if(myarray[i] < min)
    {
        min = myarray[i];
}
  }
  return min;
}