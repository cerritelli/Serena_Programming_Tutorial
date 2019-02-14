#include <stdio.h>

void print_hex(int number) {
  printf("%d in hexidecimal %x\n", number, number);
}

void print_binary(int number) {
  printf("%d in binary is:\n", number);
  for(int i = 31; i >= 0; i--) {
    printf("%d", (number >> i) & 1);
  }
  printf("\n");
}

void print_in_hex_and_binary(int number) {
  print_hex(number);
  print_binary(number);
}

int main(){

  
  printf("Let's print out some positive integers in hex and binary.\n");
  print_in_hex_and_binary(0);
  print_in_hex_and_binary(1);
  print_in_hex_and_binary(2);
  print_in_hex_and_binary(3);
  print_in_hex_and_binary(4);
  print_in_hex_and_binary(5);
  print_in_hex_and_binary(6);
  print_in_hex_and_binary(7);
  print_in_hex_and_binary(8);
  print_in_hex_and_binary(9);
  print_in_hex_and_binary(10);
  print_in_hex_and_binary(11); 
  print_in_hex_and_binary(12);
  print_in_hex_and_binary(13);
  print_in_hex_and_binary(14);
  print_in_hex_and_binary(15);
  print_in_hex_and_binary(16);
  print_in_hex_and_binary(17);
  print_in_hex_and_binary(20);
  print_in_hex_and_binary(30);
  print_in_hex_and_binary(32);
  print_in_hex_and_binary(33);
  print_in_hex_and_binary(200);
  print_in_hex_and_binary(255);
  print_in_hex_and_binary(256);
  print_in_hex_and_binary(257);
  print_in_hex_and_binary(2000000000);
  print_in_hex_and_binary(2147483647);
  


  printf("\nLet's print out a negative integers\n");
  print_in_hex_and_binary(-1);
  printf("That's weird!  That looks like a big number\n");
  print_in_hex_and_binary(-2);
  print_in_hex_and_binary(-3);
  print_in_hex_and_binary(-4);
  print_in_hex_and_binary(-5);
  printf("\n");


  printf("\nLet's look again at that very large postiive number\n");
  print_in_hex_and_binary(2147483647);
  printf("\nAnd now let's add one\n");
  // Ignore the unsigned thing for now
  // The important thing is that we're doing 2147483647 + 1
  print_in_hex_and_binary(((unsigned) 2147483647) + 1);
  print_in_hex_and_binary(((unsigned) 2147483647) + 2);

  printf("\nNow let's write it as the negative.\n");
  print_in_hex_and_binary(-2147483648);
  print_in_hex_and_binary((-2147483648) + 1);
  printf("Same thing!  Weird!\n");



  // TODO
  // Write down 0 to 32 in binary 
  // (Omit leading zeros, just like you would do in decimal)

}