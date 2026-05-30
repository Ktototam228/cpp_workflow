#pragma once
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>
#include <iostream>

class Logger {
private:
    std::ofstream file;
    static Logger* instance;
    
    Logger() {
        file.open("calculator.log", std::ios::app);
        if (!file.is_open()) {
            std::cerr << "Warning: Could not open calculator.log" << std::endl;
        }
    }
    
public:
    static Logger* getInstance() {
        if (instance == nullptr) {
            instance = new Logger();
        }
        return instance;
    }
    
    void log(const std::string& message) {
        if (!file.is_open()) return;
        
        auto now = std::chrono::system_clock::now();
        std::time_t now_time = std::chrono::system_clock::to_time_t(now);
        file << std::ctime(&now_time);
        file << "  " << message << std::endl;
        file.flush();
    }
    
    ~Logger() {
        if (file.is_open()) {
            file.close();
        }
    }
};

// Инициализация статического члена
Logger* Logger::instance = nullptr;
