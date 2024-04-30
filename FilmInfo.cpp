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
		
		//json::iterator it = data.begin();
		
		for (const auto& obj : data)
		{
			//std::cout << obj << std::endl;
			if (obj["Starring"].contains(want.name))
			{
					
				auto find_film = data.find(obj);
				auto find_role = obj["Starring"].find(want.name);
				want.role = *find_role;
				std::cout << *find_role << std::endl;
				break;
			}
			else
			{
				std::cout << "Searching!" << std::endl;
			}
			//std::cout << obj["Starring"] << std::endl;
		}
			
		
		

		
		f.close();
	}
	else
	{
		std::cerr << "File not found!" << std::endl;
	}
}
