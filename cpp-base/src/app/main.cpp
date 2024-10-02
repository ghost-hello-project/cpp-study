#include <spdlog/fmt/fmt.h>
#include <spdlog/spdlog.h>

#include "janna/util/log_util.h"

/**
 * @brief 启动文件
 * 
 * @return int 
 */
int main() {
    LogUtil::init(spdlog::level::info, "../logs/app.log");
    std::shared_ptr<spdlog::logger> log = LogUtil::getLogger("app");

    SPDLOG_LOGGER_INFO(log, "C++ 基础学习");

    spdlog::shutdown();
    return 0;
}
