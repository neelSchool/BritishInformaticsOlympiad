#include <bits/stdc++.h>
using namespace std;
 int main()
 {
	ios::sync_with_stdio(0);
	cin.tie(0);
	float inter, repay;
	int debts, total = 0;
	cin >> inter >> repay;
	inter = inter / 100 + 1;
	repay /= 100;
    debts = 10000;
	while (debts != 0)
	{
		int month = 0;
		debts = ceil(debts * inter);
		month = max((int) ceil((debts * repay)), 5000);
		if (month > debts)
		{
			month = debts;
		}
		debts -= month;
		total += month;
	}
	cout << fixed << setprecision(2) << total / 100.0 << "\n";
 }
