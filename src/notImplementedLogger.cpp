#include <hdlConvertor/notImplementedLogger.h>
#include <hdlConvertor/convertor.h>

namespace hdlConvertor {

void NotImplementedLogger::print(const char * msg) {
	if (Convertor::debug) {
		std::cerr << "Conversion to Python object not implemented: " << msg
				<< std::endl;
	}
}

void NotImplementedLogger::print(const std::string & msg) {
	NotImplementedLogger::print(msg.c_str());
}

}
