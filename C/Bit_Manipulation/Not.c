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
  int alpha = 0x1;

  printf("alpha contains:\n");
  print_binary(alpha);

  printf("When you NOT alpha, you get:\n");
  print_binary(~alpha);


  alpha = 0xFF;

  printf("alpha contains:\n");
  print_binary(alpha);

  printf("When you NOT alpha, you get:\n");
  print_binary(~alpha);


  alpha = 0x55;

  printf("alpha contains:\n");
  print_binary(alpha);

  printf("When you NOT alpha, you get:\n");
  print_binary(~alpha);


  // NOT turns all 0's to 1's, all 1's to 0's.


  // TODO (By Hand, answer as a comment)

  // NOT 0b0101000

  // NOT 0b0000000

  // NOT 0b0

  // NOT 0b11001

  // NOT 0b1

  // NOT 0b1111


}