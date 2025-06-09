#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	long long n, m, sc = 0x3f3f3f3f3f3f;
	cin >> n >> m;
	vector<long long> sz1(n);
	vector<long long> sz2(m);
	for (long long i = 0; i < n; i++)
	{
		cin >> sz1[i];
	}
	sort(sz1.begin(), sz1.end());//xiao da
	for (long long i = 0; i < m; i++)
	{
		cin >> sz2[i];
	}
	sort(sz2.begin(), sz2.end());//xiao da
	if (sz1[0] <= sz2[0]) sc = 0;
	else
	{
		for (long long i = 0; i < n; i++)
		{
			if (sz1[i] <= sz2[i])
			{
				sc = 0;
				break;
			}
			else sc = min(sc, sz1[i] - sz2[i]);
		}
	}
	cout << sc << '\n';
	return 0;
}