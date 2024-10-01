#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v;

        while (n--)
        {
            string str;
            cin>>str;
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] == '#')
                {
                    v.emplace_back(i + 1);
                }
            }
        }

        reverse(v.begin(), v.end());
        for (auto c : v)
            cout << c << " ";
        cout << endl;
    }

    return 0;
}
