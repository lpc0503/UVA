
#include <iostream>
#include <sstream>
#include <string>
 
using namespace std;
 
int main() {
 
    string s;
    s = "stringstream provides an interface to manipulate strings as if they were input/output streams";
    string val;
 
    stringstream ss;
    ss << s;
 
    cout << "output:" << endl;
 
    for (int i = 0; i < 6; i++) {
        ss >> val;
        cout << val << endl;
    }
 
    system("PAUSE");
    return 0;
}