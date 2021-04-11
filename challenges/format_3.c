#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int target;

void func()
{
  char buffer[256];

  fgets(buffer, sizeof(buffer), stdin);
  printf(buffer);
  
  if(target == 64) {
      printf("Flag: Congratulations you've completed a medium level difficulty!\n");
  } else {
      printf("Try again! Target is %d :(\n", target);
  }
}

int main(int argc, char **argv)
{
  printf("Challenge 3: This exercise shows how specific values are written in memory\n");
  func();
}