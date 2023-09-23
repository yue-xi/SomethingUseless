#include <iostream>
#include <string>
#include <vector>

using namespace std;
int test_history();

int main()
{
    int n = (~'q' << 6);
    cout << n << endl;
    string binary = "";
    while (n)
    {
        binary = (n & 1 ? "1" : "0") + binary;
        // cout << binary << endl;
        n >>= 1;
        cout << n << endl;
    }
    return 0;
}

int test_history()
{
    // string
    string s("hello ziyu");
    for (auto &c : s)
        c = toupper(c);
    s[s.size() - 1] = tolower(s[s.size() - 1]);
    cout << s << endl;

    s = "hello ziyu";
    for (decltype(s.size()) i = 0; i < s.size() && !isspace(s[i]); i++) //(int i = 0; i < s.size() && !isspace(s[i]); i++) not so good
        s[i] = toupper(s[i]);
    cout << s << endl;

    // vector
    vector<int> a{1, 2};
    int a1;
    vector<string> v6;
    while (cin >> s)
    {
        v6.push_back(s);
    }
    cout << v6[0] << ", " << v6[1] << endl;
    cin.clear();
    while (cin >> a1)
    {
        a.push_back(a1);
    }
    cout << a[2] << ", " << a[3] << endl;

    for (int i = 5; i < 3; i++)
    {
        cout << "good" << endl;
    }

    // iterator
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }

    // division
    cout << 5 / 2 << endl;

    return 0;
}