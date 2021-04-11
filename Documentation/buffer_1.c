#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void flag_func()
{
  printf("That's amazing! You've completed your first buffer overflow activity!\n");
}

int main(int argc, char **argv)
{
  char buffer[64];

  gets(buffer);
}