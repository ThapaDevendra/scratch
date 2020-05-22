#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()

{
    int x = 1;
    int y = 2;
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    system("pause");
    int ram = 135;
    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << ram;
    cout << endl;
}