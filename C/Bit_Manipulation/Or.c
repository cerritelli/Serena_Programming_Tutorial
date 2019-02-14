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
  // The hex number 0x0F (same as 0xF), is 15 in decimal.
  int beta = 0X0F;

  printf("alpha and beta contain:\n");
  print_binary(alpha);
  print_binary(beta);

  printf("When you OR them (|), you get:\n");
  print_binary(alpha | beta);

  // Where there is a 1 in either varialbes, the OR result has a 1.
  // Where there is a 0 in both varialbes, the OR result has a 0.
  
  // Note how in (alpha | beta), they both have 0's in the left most position
  // So the result has 0's there.


  // TODO (By Hand, answer as a comment)
  // What would the AND results of the following binary numbers.

  // 0b0011 | 0b1100

  // 0b1010 | 0b1000

  // 0b0010 | 0b1111

  // 0b0010 | 0b1101

}