#include <stdio.h>
#include <stdlib.h>
int main() {
 char* shell = getenv("MYSHELL");
 if (shell)
 printf("Address of /bin/sh: %p\n", (void*)shell);
 else
 printf("MYSHELL not found!\n");
 return 0;
}

