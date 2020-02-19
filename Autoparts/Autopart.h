#pragma once

#include <iostream>
#include "BasePart.h"

using namespace std;

class AutoPart : BasePart
{
	private:
		string _PartDescription = "";
		int _PartMaker = 0;
	public:
		AutoPart(int, string, int);
		~AutoPart();

		void setPartNo(int);
		void PrintPart();
};

