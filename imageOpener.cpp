//
// Created by Jonah Lefkoff on 11/9/21.
//
#include <iostream>;

using namespace std;
int main()
{
    char choice;
    cout << "y/n: ";
    cin >> choice;
    while(choice == 'y'){
        system("open /Users/jlefkoff/Documents/College\\ 21-22/GE1501/CLionProjects/untitled/download2.png"); // windows: c:\test\test.png
        cout << "y/n: ";
        cin >> choice;
    }
    system("killall Preview"); // windows: taskkill /F /IM "executable name.exe" /T

    return 0;
}
