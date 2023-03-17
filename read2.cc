#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main(){
string fileName="input.txt";
ifstream ifs(fileName.c_str(), ios::in | ios::binary | ios::ate);

    ifstream::pos_type fileSize = ifs.tellg();
    ifs.seekg(0, ios::beg);

    vector<char> bytes(fileSize);
    ifs.read(&bytes[0], fileSize);

    cout << string(&bytes[0], fileSize) <<endl;
}