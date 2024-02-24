#include "FilmInfo.h"

int main()
{
	
	std::ifstream f("films.json", std::ios::in);
	if (f.is_open())
	{
		json data = json::parse(f);

		SearchingOne want;
		std::cout << "Enter actor's name:" << std::endl;
		std::getline(std::cin, want.name);

		std::cout << want.name << std::endl;
		
		json::iterator it = data.begin();
		std::cout << *it;
		

		/*auto finder = data.find(want.name);

		if (finder != data.end())
		{
			want.role = *finder;
		}
		else
		{
			std::cout << "An actor is not found!" << std::endl;
		}
		*/
		f.close();
	}
	else
	{
		std::cerr << "File not found!" << std::endl;
	}
}
