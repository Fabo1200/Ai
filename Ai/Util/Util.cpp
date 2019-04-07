#include "pch.h"
#include "Util.h"
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace Platform;
Util::Util()
{
}

std::string Util::sConvertString(String^ s)
{
	std::string Arg = msclr::interop::marshal_as<std::string>(s);
	return Arg;
}

bool Util::bCompString(std::string sFirstStr, std::string sSecondString)
{
	std::size_t found = sFirstStr.find(sSecondString);
	return found;
}

Util::~Util()
{
}
