/*
	resultado obs não precisa apresentar a quantidade
	anacell ( 3)
	betacellular=2
	cetracular = 1
	deltacellular=0
	eurocell=0
*/

#include "Q3.h"
#include <iostream>
#include <string>
#include <array>

void FamousToys()
{
	//std::string::npos

	std::string Toys[5] = { "anacell", "betacellular", "cetracular", "deltacellular", "eurocell" };
	std::string Quotes[5] = { "Best, anacell", "betacellular", "anacell cetracular","Best, anacell!","betacellular" };
	int QuotesCountVector[5];
	
	for (int i = 0; i < std::size(Toys); i++)
	{
		int quotesCount = 0;
		for (int j = 0; j < std::size(Quotes); j++) 
		{
			if (Quotes[j].find(Toys[i]) != std::string::npos) 
			{
				quotesCount++;
			}
		}
		QuotesCountVector[i] = quotesCount;
		
	}
	
	for (int i = 0; i < std::size(Toys); i++) 
	{
		std::cout << Toys[i] << " = " << QuotesCountVector[i] << "\n";
	}

}