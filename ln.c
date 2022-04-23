#include "types.h"
#include "stat.h"
#include "user.h"

#include "exit_codes.h"


int
main(int argc, char *argv[])
{
  if(argc != 3){
    printf(2, "Usage: ln old new\n");
    exit(LN_WRONG_PARAM);
  }
  if(link(argv[1], argv[2]) < 0) {
      printf(2, "link %s %s: failed\n", argv[1], argv[2]);
      exit(LN_FAILED);
  }
  exit(SUCCESS);
}