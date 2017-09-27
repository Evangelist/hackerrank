#include <bits/stdc++.h>

using namespace std;

int maximumToys(vector <int> prices, int k) {
    // Complete this function
    // start
    sort(prices.begin(), prices.end());
    int sum = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (sum + prices[i] <= k)
        {
            sum += prices[i];
        }
        else
        {
            return i;
        }
    }
    return prices.size();
    // end
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> prices(n);
    for(int prices_i = 0; prices_i < n; prices_i++){
       cin >> prices[prices_i];
    }
    int result = maximumToys(prices, k);
    cout << result << endl;
    return 0;
}
