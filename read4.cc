#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main(){
string fileName="input.txt";
string data;
ifstream in(fileName.c_str());
getline(in, data, string::traits_type::to_char_type(string::traits_type::eof()));
cout<<data<<endl;
}