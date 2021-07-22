#include <stdio.h>

int main(int argc, char **argv){
  int fd = 1;
  const char *mode = "r";
#ifdef _WIN32
#warning "_WIN32 is defined"
#else /* _WIN32 */
#warning "_WIN32 is not defined"
#endif
  FILE *f1 = _fdopen(fd, mode);
  FILE *f2 = fdopen(fd, mode);
  
  return 0;
}
