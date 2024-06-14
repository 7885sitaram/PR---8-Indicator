#include<stdio.h>


int main(){

  char *name;
  printf("Enter your string ");
  gets(name);
    int size = 0;
   
    for( int i = 0; name[i] !='\0' ; i++){
        size++;
    }
   
    printf("Length of string is %d", size);

}