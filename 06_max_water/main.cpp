#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int> heights)
{
    int maxWater = 0;
    int lp = 0, rp = heights.size() - 1;

    while (lp < rp)
    {
        int distance = rp - lp;
        int area = distance * min(heights[lp], heights[rp]);
        maxWater = max(maxWater, area);

        heights[lp] < heights[rp] ? lp++ : rp--;
    }

    return maxWater;
}

int main()
{
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int maxArea = maxWater(heights);

    cout << "The max area will be formed by the given heights is: " << maxArea << endl;

    return 0;