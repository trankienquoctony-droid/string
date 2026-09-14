#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    bool dauTu = true;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        if (c == ' ') {
            dauTu = true;          
        } else {
            if (dauTu) {
                cout << " ";       
                c = toupper(c);        
                dauTu = false;
            }
            cout << c;
        }
    }

    return 0;
}