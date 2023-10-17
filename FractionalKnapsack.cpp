#include <bits/stdc++.h>
using namespace std;

void maxProfit(vector<int> profit,vector<int> weight, int N)
{
    int numOfElements = profit.size();
    int i;
    multimap<double, int> ratio;

    double max_profit = 0;
    for (i = 0; i < numOfElements; i++)
    {
        ratio.insert(make_pair((double)profit[i] / weight[i], i));
    }
    multimap<double, int>::reverse_iterator it;

    for (it = ratio.rbegin(); it != ratio.rend();it++)
    {
        double fraction = (double)N / weight[it->second];
        if (N >= 0&& N >= weight[it->second])
        {
            max_profit += profit[it->second];
            N -= weight[it->second];
        }
        else if (N < weight[it->second])
        {
            max_profit += fraction* profit[it->second];
            break;
        }
    }

    cout << "Maximum profit earned is:"<< max_profit;
}

int main()
{
    // Size of list
    int n;
    cin>>n;
    vector<int> profit(n), weight(n);

    // Profit of items
    for(int i=0;i<n;i++)cin>>profit[i];
    for(int i=0;i<n;i++)cin>>weight[i];
    int N;
    cin>>N;
    // Function Call
    maxProfit(profit, weight, N);
}
