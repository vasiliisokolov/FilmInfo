#include "FilmInfo.h"

int main()
{
	std::ifstream f("films.json");
	json data = json::parse(f);


}
