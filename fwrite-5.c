/*
    WRITER program.

        Example program that shows how to write

                 char, int, float and double data type data values

        in a binary file.

        Demonstrate as well the:

        long int ftell(FILE *fp) function

        ftell() returns the CURRENT file position.

*/
#include <stdio.h>
int main() {
  FILE* fp;
  char ch = '#';
  int i = 456;
  float f = 9.01f;
  double d = -6.28;

  long int fpos;  // current file position

  fp = fopen("binary.dat", "wb");

  fpos = ftell(fp);  // Q: Where are we???
  printf("Current file position after fopen() is %ld.\n", fpos);

  // write the values of ch, i, f, and d
  fwrite(&ch, sizeof(char), 1, fp);
  fpos = ftell(fp);  // Q: Where are we???
  printf("Current file position after writing ch %ld.\n", fpos);

  fwrite(&i, sizeof(int), 1, fp);
  fpos = ftell(fp);  // Q: Where are we???
  printf("Current file position after writing i %ld.\n", fpos);

  fwrite(&f, sizeof(float), 1, fp);
  fpos = ftell(fp);  // Q: Where are we???
  printf("Current file position after writing f %ld.\n", fpos);

  fwrite(&d, sizeof(double), 1, fp);
  fpos = ftell(fp);  // Q: Where are we???
  printf("Current file position after writing d %ld.\n", fpos);

  fclose(fp);

  return 0;
}
