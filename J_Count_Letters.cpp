#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ourString;

    cin >> ourString;
    sort(ourString.begin(), ourString.end());

    int stringSize = ourString.size();
    vector<int> integerVector(stringSize);

    for (int i = 0; i < stringSize; i++)
    {
        int count = 0;
        if (integerVector[i] == 1)
        {
            continue;
        }
        else
        {
            for (int j = 0; j < stringSize; j++)
            {
                if (ourString[i] == ourString[j])
                {
                    integerVector[j] = 1;
                    count++;
                }
            }
        }
        cout << ourString[i] << " : " << count << endl;
    }

    return 0;
}