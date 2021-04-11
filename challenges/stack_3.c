#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void flag_func()
{
  printf("That's amazing! You've done a medium level difficulty\n");
}

int main(int argc, char **argv)
{
  char buffer[64];
  printf("Challenge 3: This exercises looks into overwriting saved EIP\n");
  gets(buffer);
}