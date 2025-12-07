#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i=0;
  char* pc = NULL;

  pc = (char*)malloc(100*sizeof(char));
  if (pc == NULL)
  {
     printf("ERROR\n");
     exit(1);
  }

   for (i=0;i<26;i++)
      pc[i] = 'a' + i;
   pc[i] = 0;

   printf("%s\n", pc);

   free(pc);
    
  system("PAUSE");	
  return 0;
}
