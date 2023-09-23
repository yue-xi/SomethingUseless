#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> v = {"d", "e", "f", "g", "h", "i", "j", "k"};
    string targ = "k";
    auto beg = v.begin(), end = v.end() - 1;
    cout << *(v.end() - 1) << endl;
    auto mid = beg + (end - beg) / 2;
    cout << *mid << endl;
    while (*mid != targ && mid != beg)
    {
        if (*mid < targ)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = beg + (end - beg) / 2;
    }
    cout << *mid << endl;
    cout << *beg << endl;
    // cout << *end << endl;
    cout << "position: " << mid - v.begin() << endl;
    return 0;
}