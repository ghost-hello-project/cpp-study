#include <spdlog/fmt/fmt.h>
#include <spdlog/spdlog.h>

#include <iostream>

int main() {
    spdlog::info("{}", fmt::format("hello {}", "world"));
    std::cout << "Hello World" << std::endl;
    return 0;
}
