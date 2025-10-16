#include "../kernel/kernel.h"

#define _STACK_ALLOC_SIZE_LIMIT 4 // memory up to 4 bytes will be sent to stack alocator 

typedef struct _block_struct {
  void *memory;
  size_t size; 
} block_t;

// main stratego behind this alloc is using
// composition eg. for small requests we
// will be alocating memory on stack
// for larger different aproaches will be chosen
//
//

block_t memAlloc(size_t request_size);






