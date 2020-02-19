// Autoparts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Autopart.h"
#include "EnginePart.h"

int main()
{
    // BasePart bp(36);
    // Create part on the stack
    AutoPart part(5, "Steering Wheel", 243);
    part.PrintPart();

    EnginePart ep(2, 45, "Compressor", 8);
    part.PrintPart();


    //Create part on the heap
    AutoPart* pHeapPart = new AutoPart(6, "Gear Shift", 500);
    pHeapPart->PrintPart();
    delete pHeapPart; 

    EnginePart* pHeapEnginePart = new EnginePart(7, 33, "Piston", 89);
    pHeapEnginePart->PrintPart();
    delete pHeapEnginePart;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
