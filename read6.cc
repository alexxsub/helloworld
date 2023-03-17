#include <iostream>
#include <sstream>
#include <fstream>

int main()
{
  std::ifstream input("input.txt");
  std::stringstream sstr;

  while(input >> sstr.rdbuf());

  std::cout << sstr.str() << std::endl;
}