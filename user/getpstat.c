#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
  // Call getpstat to fill the pstat struct "stats"
  struct pstat stats;
  getpstat(&stats);
  // print the arrays in stats
  for(int i = 0; i<NPROC; i++)
  {
    printf("In Use?: %d", stats.inuse[i]);
    printf(" Process ID: %d", stats.pid[i]);
    printf(" Nice Value: %d\n", stats.nice[i]);
  }
 
  exit(0);
}
