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
  func(argv[1]);
}