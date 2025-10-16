#ifndef KERNEL_H
#define KERNEL_H
#include <inttypes.h>
#include <stddef.h>
typedef uint32_t flag_t;

// get from kernel contigious chunk of memory
//
//  param size needs to be aligned
void *mapmemory(size_t size, flag_t flags);

#endif
