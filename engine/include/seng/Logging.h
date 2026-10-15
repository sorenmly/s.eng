#pragma once
#include <string>
#include <string_view>

namespace seng {

enum class LogLevel { Info, Warn, Error };

class log {
public:
  static void message(LogLevel level, std::string_view text);

  static void info(std::string_view text) { message(LogLevel::Info, text); }
  static void warn(std::string_view text) { message(LogLevel::Warn, text); }
  static void error(std::string_view text) { message(LogLevel::Error, text); }

  static std::string loglevel_to_str(LogLevel level);
};

} // namespace seng
