#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void func(int key)
{
    char overflowme[32];
    printf("overflow me: ");
    gets(overflowme);

    if (key == 0xcafebabe) {
        printf("Flag: You're an expert! Keep it up!\n");
    } else {
        printf("Try looking from gdb!\n");
    }
}

int main(int argc, char **argv)
{
  func(0xdeadbeef);
  return 0;
}