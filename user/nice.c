#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
  // Call the nice function to set the current process to the inputed value.
  nice(atoi(argv[1]));
  
  // Change the current process to the inputted process.
  char **arr = (char **) &argv[2];
  exec(arr[0], (char **)&argv[2]);

  exit(0);
}
