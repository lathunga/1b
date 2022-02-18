#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
  struct pstat stats;
  getpstat(&stats);
  // print the arrays in stats
  for(int i = 0; i<NPROC; i++)
  {
    char* yn;
    if(stats.inuse[i]==1)
    {
      yn = "yes";
    }
    else
    {
      yn = "no";
    }
    printf("In Use?: %s", yn);
    printf(" Process ID: %d", stats.pid[i]);
    printf(" Nice Value: %d\n", stats.nice[i]);
  }
 
  exit(0);
}
