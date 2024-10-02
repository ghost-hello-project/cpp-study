#include <spdlog/spdlog.h>

#include "doctest/doctest.h"

TEST_SUITE("test_common") {
    TEST_CASE("test_common_one") {
        spdlog::info("test_common_one start...");
        spdlog::info("test_common_one end...");
    }
}