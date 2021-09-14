/*
        READER program.

        Example program on how to read binary data using the fread() command.
*/
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "binary.dat"

int main() {
  FILE* fpbin;
  char mych;
  int myi;
  float myf;
  double myd;

  long int fpos;

  fpbin = fopen(FILENAME, "rb");  // read binary mode
  if (fpbin != NULL) {            // file exists
    // fread(<memory address of destination data>, sizeof(<data type>), <count>,
    // <file pointer>);
    fread(&mych, sizeof(char), 1, fpbin);
    fpos = ftell(fpbin);  // Q: Where are we???
    printf("Current file position after reading a char is %ld.\n", fpos);

    fread(&myi, sizeof(int), 1, fpbin);
    fpos = ftell(fpbin);  // Q: Where are we???
    printf("Current file position after reading an int is %ld.\n", fpos);

    fread(&myf, sizeof(float), 1, fpbin);
    fpos = ftell(fpbin);  // Q: Where are we???
    printf("Current file position after reading a float is %ld.\n", fpos);

    fread(&myd, sizeof(double), 1, fpbin);
    fpos = ftell(fpbin);  // Q: Where are we???
    printf("Current file position after reading a double is %ld.\n", fpos);

    fclose(fpbin);

    printf("mych is %c\n", mych);
    printf("myi is %d\n", myi);
    printf("myf is %f\n", myf);
    printf("myd is %lf\n", myd);

  } else {  // file does not exists
    fprintf(stderr, "%s does not exist.\n", FILENAME);
    exit(1);
  }

  fclose(fpbin);

  return 0;
}
