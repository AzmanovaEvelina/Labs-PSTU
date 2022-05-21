#include "Functions.h"

std::string& Convert_String_to_string(String^ s, std::string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}

System::String^ Convert_string_to_String(std::string& os, String^ s)
{
	s = gcnew System::String(os.c_str());
	return s;
}
