#include<stdio.h>
int main(){
  int myarray[] ={10,4,2,74,12,30};
  int min;
  min = myarray[0];
  for(int i = 0; i < 6; i++){
    printf("\ncheking myarray[%d] = %d\n",i,myarray[i]);
    if(myarray[i] < min)
    {
        min = myarray[i];
      printf("new min found : %d" , min);}
  
}
   printf("Minimam %d\n", min);
  return 0;
}