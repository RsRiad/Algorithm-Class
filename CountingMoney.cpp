#include<bits/stdc++.h>
#define max  100
using namespace std;
int findMinCoins(int coins[], int size,  int value)//          
{
    int i, count = 0;

    for(i = 0; i < size; i++)
    {
        while(value >= coins[i])//
        {
            value -= coins[i];
            count++;
        }
        if(value == 0) break;
    }

    return count;
}

int main()
{
    int coins[] = {25,20,10,5};
    int value = 105, i;

    //find the size of the coins array
    int size = 4;

    int MinCount = findMinCoins(coins,size,value);

    cout<<"Total Coins Needed = "<<MinCount;


    return 0;
}
