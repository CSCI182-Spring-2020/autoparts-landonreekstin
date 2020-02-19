#pragma once

#include <iostream>

#include "AutoPart.h"

using namespace std;

class EnginePart : AutoPart
{
	private:
		int _EngineSpecNo = 0;
		

	public: 
		EnginePart(int, int, string, int);
		
		void PrintPart();

		virtual ~EnginePart();
		
};

