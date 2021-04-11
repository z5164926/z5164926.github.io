#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  volatile int modified;
  char buffer[64];

  modified = 0;
  gets(buffer);

  if(modified != 0) {
      printf("Flag: Congratulations, you've succesfully overflown your first stack!\n");
  } else {
      printf("Try again? Maybe look at the buffer size\n");
  }
}