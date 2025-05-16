#include<stdio.h>
int main(){
     int arr[10]={4,2,6,7,8},i;
     int*raj=arr;
     for(i=0;i<5;i++){
         printf("%d",*(raj+i));
         printf("%p",(raj+i));
     }
     }

40x7ffd3a1c07c020x7ffd3a1c07c460x7ffd3a1c07c870x7ffd3a1c07cc80x7ffd3a1c07d0
