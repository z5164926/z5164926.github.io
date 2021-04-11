#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void getpath()
{
  char buffer[64];
  unsigned int ret;

  printf("input path please: "); fflush(stdout);

  gets(buffer);

  ret = __builtin_return_address(0);

  if((ret & 0xbf000000) == 0xbf000000) {
    printf("Try again! Experiment with objdump! (%p)\n", ret);
    _exit(1);
  }

  printf("Congratulations, you've completed the hardest stack overflow challenge! %s\n", buffer);
}

int main(int argc, char **argv)
{
  printf("Challenge 4: This challenge looks at restrictions on a return address!\n");
  getpath();
}