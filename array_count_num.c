#include<stdio.h>
int main(){
    int myarray[] = {1,3,5,3,3,6,7,7};
    int count = 0;
    int to_find = 3;

    for(int i = 0;i < 8;i++){
        printf("myarray[%d] = %d\n", i ,myarray[i]);
        {if(myarray[i] == to_find)
        count++;
    printf("found %d incremeted count to:%d\n",count);
    }
}
    printf("# to 3s found:%d\n",to_find,count);
    return 0;
}