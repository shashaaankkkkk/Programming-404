#include<stdio.h>
int main(){
  /* if(condition){
     //thing to do
     }else{
     to do again
     }
  */
//check age of user if he or she can vote
  int age;
  printf("enter your age:\n");
  scanf("%d",&age);
  if(age<18){
    printf("You are nabalik\n");
  }else{
    printf("Jao sarkar girao\n");
  }
}
