#include<stdio.h> 
#include<string.h>

int main (){
  char cars[][10] = {"Mustang", "Corvette", "E31"};

strcpy(cars[0], "Tesla"); //to add or change one of the values of a string array use strcpy
  for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
    printf("%s\n", cars[i]); 
  }
  return 0; 
  }