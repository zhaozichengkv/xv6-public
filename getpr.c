#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  int pid;

  if(argc < 2 ){
    printf(2,"usage: getpr pid\n" );
    exit();
  }
  pid = atoi ( argv[1] );
  getpr ( pid );
  
  exit();
}
