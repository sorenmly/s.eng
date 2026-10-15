#include "../include/seng/Logging.h"

#include <iostream>

std::string seng::log::loglevel_to_str(LogLevel level) {
  switch (level) {
  case LogLevel::Error:
    return "[ERROR]>";
  case LogLevel::Info:
    return "[INFO]>";
  case LogLevel::Warn:
    return "[WARN]>";
  default:
    return ">";
  }
}

void seng::log::message(LogLevel level, std::string_view text) {
#ifdef SENG_LOG
  std::cout << loglevel_to_str(level) << " " << text << std::endl;
#endif
};
