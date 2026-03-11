#include "arghelpers.hh"
#include <regex>

bool isValidDate(const std::string& date)
{
  static const std::regex dregex(R"(\d{4}-\d{2}-\d{2})");
  return regex_match(date, dregex);
}
