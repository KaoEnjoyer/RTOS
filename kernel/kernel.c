#include "kernel.h"
#include <sys/mman.h>
void *mapmemory(size_t size, flag_t flags) {

  return mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS,
              -1,
              0); // TODO: for now its only wrapper
}
