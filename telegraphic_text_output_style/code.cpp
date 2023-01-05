#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    cout << "Hello dear, ";

    for (int i = 0; i < str.size(); i++) {
        cout << str[i];
        Sleep(100);
    }
    cout << " !";

    system("pause");
    return 0;
}
