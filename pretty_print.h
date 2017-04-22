//C++14, here we go

#ifndef __PRETTY_PRINT_H
#define __PRETTY_PRINT_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

namespace pretty_print {

	//Pretty Printing Library
	//Follows some conventions akin to python/gdb 
	//Assuming Move semantics available for now, hence usingg universal references.

	std::ostream& operator<<(std::ostream& os, const std::string&& object);

	//Assuming null terminated
	std::ostream& operator<<(std::ostream& os, const char* object);
}

#endif
