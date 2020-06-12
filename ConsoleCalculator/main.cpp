#include <iostream>
#include <sstream>

#include "Calculator.h"
#include "Exception.h"

using namespace clc;

int main()
{
	std::wistringstream sstream{L"-sqrt(sqrt(4 / 4) * (sqrt(4) - -1) );"};
	Calculator calculator{sstream};

	while (calculator)
	{
		try
		{
			std::wcout << calculator.GetResult()
				<< std::endl;
		}
		catch (Exception & e)
		{
			std::wcerr << e.GetMessage() << std::endl;

			if (e.IsFatalError() )
				break;
		}
	}
	
	return 0;
}