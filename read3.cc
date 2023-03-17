#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main(){
string fileName="input.txt";
 
ifstream f(fileName.c_str());
    cout<< string(std::istreambuf_iterator<char>(f),
            std::istreambuf_iterator<char>()) <<endl;

}