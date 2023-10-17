#include <bits/stdc++.h>
using namespace std;
unsigned long long factorial(unsigned long long n)
{
	if (n == 0 || n == 1) return 1;
	return n * factorial(n - 1);
}
int main()
{
	int num;
	cin>>num;
	cout << "Factorial of "<< num << " is " << factorial(num) << endl;
	return 0;
}

