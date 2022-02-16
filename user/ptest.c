// Create a zombie process that
// must be reparented at exit.

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
  printf("%d", pcount());
  if(fork() > 0) {
    sleep(5);  // Let child exit before parent.
    printf("\n%d\n", pcount());
  }
  exit(0);
}

// Name: Luke Thunga
// The second count will be one more than the first count because fork() causes a duplicate process of the current one.
