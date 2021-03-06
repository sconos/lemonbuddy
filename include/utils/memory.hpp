#pragma once

#include "common.hpp"

LEMONBUDDY_NS

namespace memory_util {
  /**
   * Create a shared pointer using malloc/free
   */
  template <typename T>
  inline auto make_malloc_ptr(size_t size = sizeof(T)) {
    return shared_ptr<T>(static_cast<T*>(malloc(size)), free);
  }

  /**
   * Get the number of elements in T
   */
  template <typename T>
  inline auto countof(T& p) {
    return sizeof(p) / sizeof(p[0]);
  }
}

LEMONBUDDY_NS_END
