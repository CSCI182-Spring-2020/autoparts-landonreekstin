#pragma once

#include <iostream>

#include "EnginePart.h"
#include "Autopart.h"



using namespace std;

EnginePart::EnginePart(int engineSpecNo, int partNo, string partDescription, int partMaker) : AutoPart(partNo, partDescription, partMaker)
{
	_EngineSpecNo = engineSpecNo;
	cout << "In AutoPart Constructor: " << _EngineSpecNo << endl;
}

EnginePart::~EnginePart()
{
	cout << "In EnginePart Destructor: " << _EngineSpecNo << endl;
}

//void EnginePart::PrintPart()
//{
//	cout << AutoPart::_EngineSpecNo << "\t" << _PartNo << "\t" << _PartMaker << "\t" << _PartDescription << endl;
//}
