#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;

    cin >> s;

    vector<int> number;

    for (char c : s)
    {
        if (c != '+')
        {
            number.push_back(c - '0');
        }
    }

    sort(number.begin(), number.end());

    for (int i = 0; i < number.size(); i++)
    {
        if (i > 0)
        {
            cout << "+";
        }
        cout << number[i];
    }

    return 0;
}