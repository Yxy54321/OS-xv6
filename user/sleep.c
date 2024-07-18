#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/fcntl.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc <= 1){
    printf("not enough arguments\n");
    exit(0);
  }
  else{
    char *p=argv[1];
    while(*p!='\0'){
        if (*p>'9'||*p<'0'){
            print("invalid arguments.\n");
            exit(1);
        }
    }
    if(argc>2){
        printf("warning:you gave more arguments than needed,first one is used.\n");
    }
    sleep(atoi(argv[1]));
  }
  
  exit(0);
}