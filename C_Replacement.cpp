#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize;
    cin >> vectorSize;

    vector<int> integerVector(vectorSize);
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    for (int i = 0; i < vectorSize; i++)
    {
        if (integerVector[i] > 0)
        {
            integerVector[i] = 1;
        }
        else if (integerVector[i] < 0)
        {
            integerVector[i] = 2;
        }

        cout << integerVector[i] << " ";
    }

    return 0;
}