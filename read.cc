
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    string s; 
    ifstream f;

    f.open("input.txt");
    while(getline(f, s)){
        cout << s << endl;       
    }
    f.close(); 

    return 0;
}