//
// Created by mwypych on 07.02.17.
//

#ifndef MEMORYLEAKDETECTION_MEMORYENTRY_H
#define MEMORYLEAKDETECTION_MEMORYENTRY_H

#include <cstddef>
class MemoryEntry {
 public:
  MemoryEntry(const void *memory_ptr, const size_t memory_size);
  MemoryEntry();

  virtual bool is_valid() const;
  virtual bool points_to(const void *ptr) const;
  virtual void invalidate();

 private:
  const void *memory_ptr;
  size_t memory_size;
  bool validity;
};

#endif //MEMORYLEAKDETECTION_MEMORYENTRY_H