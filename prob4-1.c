/*
        Initial solution to Problem 4.1 (End of Chapter 4 exercise on text
   files)

*/
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "essay.txt"

int main() {
  FILE* fp;
  char ch;
  int nletters = 0;  // ctr for the number of letters (lower and upper case)

  fp = fopen(FILENAME, "r");  // read mode
  printf("fp = %p\n", fp);    // NULL means value 0

  if (fp != NULL) {  // file exists

    // read all characters from the input text file
    while (fscanf(fp, "%c", &ch) == 1) {
      if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        nletters++;

      printf("%c", ch);
    }

    fclose(fp);
    printf("\n");
    printf("Number of letters is %d\n", nletters);
  } else {
    fprintf(stderr, "%s does not exist.\n", FILENAME);  // error handling
    // printf("%s does not exist.\n", FILENAME);
    exit(1);  // abnormal program termination
  }

  return 0;
}
