#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> v7(10, "hi");
    if (!v7.empty())
    {
        cout << "v7 has " << v7.size() << "components, they are:" << endl;
        for (auto it = v7.cbegin(); it != v7.cend(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "v7 is empty!" << endl;
    }
    return 0;
}