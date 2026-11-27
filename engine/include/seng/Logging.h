#pragma once
#include <string>
#include <string_view>

namespace seng {

enum class LogLevel { Info, Warn, Error };

/// @class log
/// @brief Used for logging things in terminal. It has three levels defined byt
/// the enum LogLevel.
class log {
public:
  /// @brief
  /// Sends a log in the terminal with level defined.
  ///
  /// @param level The level of the log (Info, Warn or Error). Must be passed
  /// through enum class LogLevel.
  /// @param text The text of the log as string_view.
  static void message(LogLevel level, std::string_view text);

  /// @brief
  /// Sends an Info level log with text message.
  ///
  /// @param text The text of the log as string_view.
  static void info(std::string_view text) { message(LogLevel::Info, text); }

  /// @brief
  /// Sends an Warn level log with text message.
  ///
  /// @param text The text of the log as string_view.
  static void warn(std::string_view text) { message(LogLevel::Warn, text); }

  /// @brief
  /// Sends an Error level log with text message.
  ///
  /// @param text The text of the log as string_view.
  static void error(std::string_view text) { message(LogLevel::Error, text); }

private:
  static std::string loglevel_to_str(LogLevel level);
};

} // namespace seng
