#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
  volatile int target;
  char buffer[64];

    printf("Challenge 2: This exercise looks at the concept of modifying variables to specific values.\n");
  if(argc == 1) {
      errx(1, "please specify an argument\n");
  }

  target = 0;
  strcpy(buffer, argv[1]);

  if(target == 0x61626364) {
      printf("Well done! I hope the warm up is going well!\n");
  } else {
      printf("Try again, you got 0x%08x\n", target);
  }
}