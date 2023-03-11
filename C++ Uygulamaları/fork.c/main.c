#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>

int main (void )
{
  pid_t f;
   pid_t t;

  f=fork();
  t=fork();


  if (f==-1)
  {
    printf("HATA PROSES YARATAMADIK \n");
    exit(1);
  }

  else if (f==0)
  {
    printf("   COCUK: Proses id: %d \n", getpid());
    sleep(1);
    printf("   Child: Anne proses id: %d \n", getppid());
    exit(0);
  }
  else
  {
    printf("Anne: Process id: %d \n", getpid());
    printf("Anne: Child process id: %d \n", f);
    wait(NULL);
    printf("Anne: gule gule\n");

  }


if (t==0)
  {
    printf("   COCUK2: Proses id: %d \n", getpid());
    sleep(1);
    printf("   Child2: Anne proses id: %d \n", getppid());

  }
  else
  {
    printf("Anne2: Process id: %d \n", getpid());
    printf("Anne2: Child process id: %d \n", t);
    wait(NULL);
    printf("Anne2: Gule gule...\n");

  }
  return (0);
}
