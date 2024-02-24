#pragma once
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

struct SearchingOne
{
	std::string name;
	std::string film;
	std::string role;
};