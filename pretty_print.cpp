#include "pretty_print.h"

std::ostream& pretty_print::operator<<(std::ostream& os, const std::string&& object) {
	std::operator<<(os,object);
	return os;
}

std::ostream& pretty_print::operator<<(std::ostream& os, const char* object) {
	std::operator<<(os,object);
	return os;
}

