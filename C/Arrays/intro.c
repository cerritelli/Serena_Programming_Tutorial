#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  
  // We declare the numbers variable to be an int*
  // int * is called a "pointer".  But let's think of it
  // as an integer array type.
  int *numbers;
  char *characters;

  // We are allocating memory for 20 integers
  numbers = (int *)malloc(20 * sizeof(int));

  // For i = 0 up to i = 19, 
  // Assign the numbers array at index i
  // the value of i plus 7
  for(int i = 0; i < 20; i++){
    numbers[i] = 7 + i;
  }

  // Print the number at index 10
  printf("%d\n", numbers[10]);
  // Print the number at index 15
  printf("%d\n", numbers[15]);
  

  // We are allocating memory for 30 characters
  characters = (char *)malloc(30 * sizeof(char));

  // We are copying the text 'Bananas are cool'
  // to the 'characters' array (which is a char array, or string)
  strcpy(characters, "Bananas are cool");

  // Print the entire string
  printf("%s\n", characters);

  // Print the first character
  printf("%c\n", characters[0]);
  // Print the second character
  printf("%c\n", characters[1]);
  // Print the third character
  printf("%c\n", characters[2]);
  // Print the fourth character
  printf("%c\n", characters[3]);

}