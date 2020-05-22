#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()

{
    vector<string> msg{"Hello", "C++", "World", "Habana", "from", "VS Code", "and the C++ extension!"};
    system("pause");
    string asdf = "asdfasdf";
    int ram = 135;
    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << ram;
    cout << endl;
}
