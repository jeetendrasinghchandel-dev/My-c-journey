#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool is_Palindrom(char string[]);
int main(void){
    char string1[] = "not a palindrom";
    char string2[] = "abccba";
    char string3[] = "abcdcba";

    if(is_Palindrom(string1))
    printf("%s\n -is_palindrom",string1);
else 
printf("%s\n - is not palindrom",string1);
printf("\n"); 
if(is_Palindrom(string2))
    printf("%s\n -is palindrom",string2);
else 
printf("%s\n - is not palindrom",string2); 
printf("\n");
if(is_Palindrom(string3))
    printf("%s\n -is palindrom",string3);
else 
printf("%s\n - is not palindrom",string3); 
return 0;

}
 bool is_Palindrom(char string[]){

    int middle = strlen(string)/2;

    int len = strlen(string);
    for(int i=0;i<middle;i++)
        if(string[i] != string[len-i-1])
        return false;
    return true;

        
    

}