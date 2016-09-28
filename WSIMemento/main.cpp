#include <iostream>
#include "CommandLog.h"
#include <sstream>

int main()
{
	CommandLog* commandLog = CommandLog::GetInstance();

	std::string input = "heh";

	// How to get a string/sentence with spaces
	std::cout << "since up and down already does this, 'up' or 'u' cycles up, 'down' or 'd' cycles down" << std::endl;


	while (input != "")
	{
		getline(std::cin, input);

		if ((input == "up") || (input == "u"))
		{
			std::cout << "fetched memento with " <<  commandLog->CycleUp() << std::endl;
		}
		else if ((input == "down") || (input == "d"))
		{
			std::cout << "fetched memento with " << commandLog->CycleDown() << std::endl;
		}
		else
		{
			std::cout << "You entered: " << input << std::endl << std::endl;
			commandLog->AddString(input);
		}
	}
		
	return 0;
}