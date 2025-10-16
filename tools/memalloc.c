#include "memalloc.h"

// changes size to aligned value
static size_t getAligment(size_t size);
static block_t stackAlloc(size_t size);

block_t memalloc(size_t request_size) {
  block_t res = {NULL, 0};
  // choose fiting allocator depending on request
  if
}
