/*
        Example program for writing into a text file.

        "w" write mode -- but this is destructive!  It will overwrite the
   original contents of a file if it exists.

        "a" append mode - is not destructive.  It will write new at the end of
   original file it exists.
*/
#include <stdio.h>
int main() {
  FILE* fp;

  // fp = fopen("sample.txt", "w");   // "w" destructive
  fp = fopen("sample.txt", "a");  // "a" non-destructive
  fprintf(fp, "Goodbye for now...\n");
  fclose(fp);

  return 0;
}
