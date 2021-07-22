#include <stdio.h>

extern FILE * fdopen_not_exist(int, const char *);

int main(int argc, char **argv){
  int fd = 1;
  const char *mode = "r";
#ifdef _WIN32
#warning "_WIN32 is defined"
  FILE *f1 = _fdopen(fd, mode); /* No error */
  FILE *f2 = fdopen(fd, mode); /* No error */
  
#else /* _WIN32 */
#warning "_WIN32 is not defined"
  //FILE *f1 = _fdopen(fd, mode); /* error */
  FILE *f2 = fdopen(fd, mode); /* No error */
#endif
  FILE *f3 = fdopen_not_exist(fd, mode); /* This should cause link error. */
  return 0;
}
