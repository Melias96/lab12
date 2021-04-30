#include<stdio.h>
int main(){
  char phone[13];
  printf("Enter phone number [(999)999-9999]:");
  scanf("%s",phone);
  char cphone[12];
  int i;
  for(i=1;i<13;i++){
    if(i==4){
    cphone[i-1] = '-';
    }
    else{
      cphone[i-1] = phone[i];
    }
  }
  cphone[i-1] = '\0';
  printf("You entered %s\n",cphone);
  return 0;
}