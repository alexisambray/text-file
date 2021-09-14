/*
        Example program that shows how to write

                 char, int, float and double data type data values

        in a binary file.
*/
#include <stdio.h>
int main() {
  FILE* fp;
  char ch = 'A';
  int i = 123;
  float f = 6.78f;
  double d = 3.1416;

  fp = fopen("binary.dat", "wb");

  // write the values of ch, i, f, and d
  fwrite(&ch, sizeof(char), 1, fp);
  fwrite(&i, sizeof(int), 1, fp);
  fwrite(&f, sizeof(float), 1, fp);
  fwrite(&d, sizeof(double), 1, fp);

  fclose(fp);

  return 0;
}
