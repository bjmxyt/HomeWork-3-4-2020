#include <stdio.h>
#include<iostream>
#include <vector>

using namespace std;

class Fibonacci {
public:
	static double of(int n)
	{
		vector<int> dp(n + 1, 1);
		for (int i = 3; i <= n; i++)
		{
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		return dp[n];
	}
};


int main()
{
	for (int i = 1; i <= 200; i++)
	{
		cout << Fibonacci::of(i) << endl;
	}
}