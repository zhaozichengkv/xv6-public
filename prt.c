#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  int n;
  double d;

  if(argc < 2)
    n = 1;
  else
    n = atoi (argv[1]);
  if( n < 0 || n > 20)
    n = 2;
  if(argc < 3)
    d = 1.0;
  else
    d = atoi (argv[2]);

  for(;;){
     d++;
    }
  exit();
}
