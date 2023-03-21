#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
  ifstream input("input.txt");
  stringstream sstr;

  while(input >> sstr.rdbuf());

  cout << sstr.str() << endl;
}