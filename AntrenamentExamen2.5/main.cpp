#include <iostream>
#include "Sentence.h"
#include "ComputeVowals.h"
#include "CountLetter.h"
#include "LongestWord.h"

int main()
{
    Sentence s("Second POO test");
    (s += new ComputeVowals("Voc")) += new CountLetter("CountE", [](char ch) {return ch == 'e'; });
    s += new LongestWord("long");
    s.ListAll();
    std::cout << "====================" << std::endl;
    s.RunAll();
    std::cout << "====================" << std::endl;
    s.Run("CountE");
    return 0;
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
