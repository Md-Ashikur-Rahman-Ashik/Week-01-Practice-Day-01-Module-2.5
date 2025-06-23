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

    reverse(integerVector.begin(), integerVector.end());

    for (int i = 0; i < vectorSize; i++)
    {
        cout << integerVector[i] << " ";
    }

    return 0;
}