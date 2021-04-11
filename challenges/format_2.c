#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int target;

void func(char *string)
{
  printf(string);
  
  if(target) {
      printf("Flag: You're a natural!\n");
  }
}

int main(int argc, char **argv)
{
  printf("Challenge 2: Showing you how format strings can modify arbitrary memory locations\n");
  func(argv[1]);
}