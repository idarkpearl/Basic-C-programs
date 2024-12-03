//
// Created by YASH on 03-12-2024.
//
#include<stdio.h>
int year;
int select;
int main(){
while(select ==0)
  {
     printf("do you want to check leap year or not if yes enter 1 else enter 0 : ");
     scanf("%d",&select);
     if(select==1)
      {
         printf("ENTER THE YEAR : ");
         scanf("%d",&year);
         if(year%4==0 && year%100!=0 || year%400==0)
           printf("It is a leap year");
          else
           printf("It is not a leap year");
       }
      else if(select==0);

  }
  return 0;
  }