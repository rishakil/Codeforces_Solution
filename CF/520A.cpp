#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if (t < 26)
    {
        cout << "NO";
        return 0;
    }
    string s;
    cin >> s;
    string c = "abcdefghijklmnopqrstuvwxyz";

    int count = 0;

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (s[j] == (char)(int(c[i]) - 32) || s[j] == c[i])
            {
                count++;
                break;
            }
        }
    }

    (count == 26) ? cout << "YES" : cout << "NO"
    return 0;
}