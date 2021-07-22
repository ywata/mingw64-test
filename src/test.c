#include <stdio.h>

int main(int argc, char **argv){
#ifdef _WIN32
#warning "_WIN32 is defined"
#else /* _WIN32 */
#warning "_WIN32 is not defined"
#endif
  return 0;
}
