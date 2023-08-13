#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0, j = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
        if (!(str[i] == 'y' || str[i] == 'Y' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U'))
        {
            cout << "." << str[i];
        }
    }
    return 0;
}