#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

long long MaxPairwiseProductFast(vector<int> &numbers)
{
    int n = numbers.size();
    int max_index1 = 0;
    int max_index2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > numbers[max_index1])
        {
            max_index1 = i;
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (j != max_index1 && numbers[j] > numbers[max_index2])
        {
            max_index2 = j;
        }
    }

    return (long long)numbers[max_index1] * numbers[max_index2];
}

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    long long result = MaxPairwiseProductFast(numbers);
    cout << result << "\n";
    return 0;
}
