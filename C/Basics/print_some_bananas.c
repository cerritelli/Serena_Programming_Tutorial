#include <stdio.h>

int main(){
  
  // You have to declare the type of each variable.
  // So total is of type int.  And can only store integers.
  int total = 0;

  // banana is of type char*. Which is basically what you would use
  // as the type for Strings.  Strings are arrays of char (character).
  // We'll explore chars and strings in more detail later.
  const char *banana = "Banana";

  // This is the basic structure of a for loop.
  for(int i = 0; i < 10; i++) {
    total += i;

    // This is the formated print function.  It will output
    // The string, and replace the %d with whatever digit you put later.
    // We'll explore this in more detials later.
    printf("%d More banana!\n", i);
  }

  // With printf, if you don't end with a \n, it doesn't add a new line character
  // Which means any further prints will be on the same line
  printf("%d bananas...", total);
  printf("That is a lot of bananas!\n");
}