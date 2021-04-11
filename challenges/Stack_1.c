#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  volatile int modified;
  char buffer[64];
  printf("Welcome to the bonus challenge! Stack overflows.\n");
  printf("Stack overflows are similar to buffer overflows, however the main difference is that you're overflowing the stack instead of a buffer input!\n");
  printf("As always, if you need help, try looking at the open source documentation\n");
  modified = 0;
  gets(buffer);

  if(modified != 0) {
      printf("Flag: Congratulations, you've succesfully overflown your first stack!\n");
  } else {
      printf("Try again? Maybe look at the buffer size\n");
  }
}