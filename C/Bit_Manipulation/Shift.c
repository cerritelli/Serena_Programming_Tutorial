#include <stdio.h>

void print_binary(int number) {
  // We're only printing the least significant 10 digits
  for(int i = 10; i >= 0; i--) {
    printf("%d", (number >> i) & 1);
  }
  printf("\n");
}

int main(){
  // The number 0XF0 is a hexidecimal number.
  // In decimal it's 255
  int alpha = 0xFF;

  printf("alpha contains:\n");
  print_binary(alpha);

  printf("When you left shift alpha by 1, you get:\n");
  print_binary(alpha << 1);
  printf("When you left shift alpha by 3, you get:\n");
  print_binary(alpha << 3);

  printf("When you right shift alpha by 1, you get:\n");
  print_binary(alpha >> 1);

  printf("When you right shift alpha by 3, you get:\n");
  print_binary(alpha >> 3);


  // Shifting moves all the bits to the "left" or "right".


  // TODO
  // Right Shift alpha by 4, and save it in alpha.
  // Then, left shift this new alpha by 3




  // TODO (By Hand, answer as a comment)

  // Left shift 0b10101 by 2

  // Right shift 0b10101 by 2

  // Right shift 0b10101 by 5, then left shift by 2

}