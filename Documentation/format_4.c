#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int target;

void printbuffer(char *string)
{
  printf(string);
}

void func()
{
  char buffer[512];

  fgets(buffer, sizeof(buffer), stdin);

  printbuffer(buffer);
  
  if(target == 0x01025544) {
      printf("Final level completed! Amazing job!\n");
  } else {
      printf("Try again! Target is %08x :(\n", target);
  }
}

int main(int argc, char **argv)
{
  func();
}