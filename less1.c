#include <stdio.h>
#include <math.h>
char get () 
{
  char a=0, b=34, c=35;
  a = c+b;
return a;
}

char main ()
{
    printf("Got:%c\n", get());
    return 0;
}
