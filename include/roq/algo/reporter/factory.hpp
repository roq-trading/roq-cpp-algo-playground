/* Copyright (c) 2017-2024, Hans Erik Thrane */

#pragma once

#include "roq/compat.hpp"

#include <memory>

#include "roq/algo/reporter/handler.hpp"

namespace roq {
namespace algo {
namespace reporter {

struct ROQ_PUBLIC Factory final {
  enum class Type {
    NONE,
    SUMMARY,
  };

  static std::unique_ptr<Handler> create(Type);
};

}  // namespace reporter
}  // namespace algo
}  // namespace roq
