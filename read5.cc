#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main(){
    string fileName="input.txt";
    ifstream file(fileName.c_str(), ios::in | ios::binary | ios::ate);

    string data;
    data.reserve(file.tellg());
    file.seekg(0, ios::beg);
    data.append(istreambuf_iterator<char>(file.rdbuf()),
                istreambuf_iterator<char>());
    cout<<data<<endl;

};