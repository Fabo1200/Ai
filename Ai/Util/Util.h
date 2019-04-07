#pragma once
#include <string>
#include "pch.h"
#include "MainPage.xaml.h"
using namespace Platform;


class Util
{
public:
	Util();
	~Util();

public:
	std::string sConvertString(String^);
	bool bCompString(std::string, std::string);
};

