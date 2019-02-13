#include <stdio.h>

int main(){
  
  // These are two ways to initialize an array.
  // This first way specifies the length of the array
  int array_1[5] = {1,2,3,4,5};
  // Or the size will be implied by this number of elements
  // But we won't worry too much about that right now.
  int array_2[] = {1,2,3,4,5};

  // Here we create an array of ints of length 5.
  // But don't specify what the values are yet
  int array_3[5];

  // This prints out each each element of array1 on a new line
  for(int i = 0; i < 5; i++){
    printf("%d\n", array_1[i]);
  }

  array_3[0] = 8;
  array_3[1] = 9;
  array_3[2] = 10;
  array_3[3] = 11;
  array_3[4] = 12;

  // TODO
  // Print out each element or array_3, on the SAME line
  // NOT each on their own line



}