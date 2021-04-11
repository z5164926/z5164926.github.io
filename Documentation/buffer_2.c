#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
  printf("Welcome to the second challenge!\n");
  printf("This time, you'll need to exploit the environment variable to discover the flag!\n");
  volatile int target;
  char buffer[64];
  char *envvariable;

  envvariable = getenv("GREENIE");

  if(envvariable == NULL) {
      errx(1, "please set the GREENIE environment variable\n");
  }

  target = 0;

  strcpy(buffer, envvariable);

  if(target == 0x0d0a0d0a) {
      printf("Congratulations, you've learned how to set an environment variable\n");
  } else {
      printf("Try again, you got 0x%08x\n", target);
  }

}
