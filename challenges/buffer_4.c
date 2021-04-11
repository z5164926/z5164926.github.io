#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *getpath()
{
  char buffer[64];
  unsigned int return_add;
  printf("Challenge 4: This exercises focuses on what happens when you have restrictions on a return address\n");
  printf("Look carefully at duplicate payloads\n");
  printf("input path please: "); fflush(stdout);

  gets(buffer);

  return_add = __builtin_return_address(0);

  if((return_add & 0xb0000000) == 0xb0000000) {
      printf("Unlucky! Try looking through objdump (%p)\n", return_add);
      _exit(1);
  }

  printf("You got the path %s\n", buffer);
  return strdup(buffer);
}

int main(int argc, char **argv)
{
  getpath();
}
