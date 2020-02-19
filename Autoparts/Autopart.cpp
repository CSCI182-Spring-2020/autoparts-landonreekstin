#pragma once
#include <iostream>
#include "Autopart.h"
#include "EnginePart.h"
#include "BasePart.h"

using namespace std;

AutoPart::AutoPart(int partNo, string partDescription, int partMaker) : BasePart(partNo)
{
	_PartNo = partNo;
	_PartDescription = partDescription;
	_PartMaker = partMaker;
	cout << "In AutoPart Constructor: " << _PartDescription << endl;
}


AutoPart::~AutoPart()
{
	cout << "In AutoPart Destructor: " << _PartDescription << endl;

}


// Print the parts info
void AutoPart::PrintPart()
{
	cout << BasePart::_PartNo << "\t" << _PartMaker << "\t" << _PartDescription << endl;
}



/*void AutoPart::setPartNo(int partNo)
{
	_PartNo = partNo;
} */
