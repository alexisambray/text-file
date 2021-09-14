/*
        Example on writing to a binary file.
        mode: "wb"  b meaning binary
        function: fwrite() for writing data in binary format
*/
#include <stdio.h>

int main() {
  FILE* fp;
  char filename[51];

  int i = 123;

  scanf("%s", filename);  // input filename and extension
  fp = fopen(filename, "wb");
  // fwrite(<memory address of source data>, sizeof(<data type>), <count>, <file
  // pointer>);
  fwrite(&i, sizeof(int), 1, fp);

  fclose(fp);

  return 0;
}
