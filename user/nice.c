#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
  nice(atoi(argv[1]));
  
  char **arr = (char **) &argv[2];
  exec(arr[0], (char **)&argv[2]);

  exit(0);
}
