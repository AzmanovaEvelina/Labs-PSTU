#pragma once
#include <iostream>
#include<random>
#include <cmath>
#include<fstream>
using namespace System;
std::string& Convert_String_to_string(String^ s, std::string& os); // Конвертируем System:: srting^ в std::string
String^ Convert_string_to_String(std::string& os, String^ s); // Конвертируем std::string в System:: srting^ 
