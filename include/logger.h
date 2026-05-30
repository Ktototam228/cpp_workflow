#pragma once
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>

class Logger {
public:
    static void log(const std::string& message) {
        std::ofstream file("calculator.log", std::ios::app);
        auto now = std::chrono::system_clock::now();
        std::time_t now_time = std::chrono::system_clock::to_time_t(now);
        file << std::ctime(&now_time) << " - " << message << std::endl;
        file.close();
    }
};
