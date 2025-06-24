#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize, countSimilar = 0, countMore = 0;
    cin >> vectorSize;

    vector<int> integerVector(vectorSize);
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    for (int i = 0; i < vectorSize; i++)
    {
        for (int j = i + 1; j < vectorSize; j++)
        {
            if (integerVector[i] == integerVector[j])
            {
                countSimilar++;
            }
            else if (integerVector[i] + 1 == integerVector[j])
            {
                countMore++;
            }
        }
    }

    if (countMore > 0)
    {
        if (countMore > countSimilar)
        {
            cout << countMore;
        }
        else
        {
            cout << countMore + countSimilar;
        }
    }
    else if (countMore == 0)
    {
        cout << countMore;
    }

    return 0;
}