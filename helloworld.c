#include <stdio.h>

int main(int argc, char **argv)
{
  char *name = {'\0'};
  if(argc == 1)
  {
      name = "chaoz";
  }
  else if(argc == 2)
  {
      name = argv[1];
  }
  else
  {
      printf("Too many arguments\n");
      return 0;
  }
  printf("Hello World: %s\n", name);

  return 0;
}
