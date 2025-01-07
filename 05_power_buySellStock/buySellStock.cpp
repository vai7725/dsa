#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxProfit = 0, bestBuy = prices[0];

    for (int price : prices)
    {
        if (price > bestBuy)
        {
            maxProfit = max(maxProfit, price - bestBuy);
        }
        bestBuy = min(bestBuy, price);
    }

    return maxProfit;
}

void printVec(vector<int> arr)
{
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> prices = {23, 45, 9, 76, 78};

    cout << "The prices: " << endl;
    printVec(prices);

    int maxProf = maxProfit(prices);

    cout << "The maximum profit from the prices will be: " << maxProf << endl;

    return 0;
}