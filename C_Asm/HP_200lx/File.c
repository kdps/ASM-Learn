#include <stdio.h>
#include <dos.h>

int main()
{
  int s;
  FILE *stream;
  stream = fopen("c:\\200lx\\200lx.txt","r");
  
  if (stream == NULL)
  {
    printf("File not found!");
    exit(1);
  }
  
  s = fgetc(stream);
  if (s != EOF)
  {
    // Do Stuff
  }
  
  fclose(stream); 
  
  return 0;
}
