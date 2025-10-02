#include <unordered_map>

std::unordered_map<std::string, bool> settings;
settings["dark_mode"] = true;
bool is_dark_mode = settings["dark_mode"];