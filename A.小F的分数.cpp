#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	double a[6];
	double b[9];
	double T = 0, B = 0, fz1 = 0, fz2 = 0, jg1 = 0, jg2 = 0, sc = 0;
	for (int i = 1; i <= 5; i++)
	{
		cin >> a[i];
		if (a[i] != 0) T += a[i];
	}
	for (int i = 1; i <= 8; i++)
	{
		cin >> b[i];
		if (b[i] != 0) B += b[i];
	}
	fz1 = a[1] * 1 + a[2] * 1 + a[3] * 0.8 + a[4] * 0.5;
	fz1 = fz1 + (b[1] + b[2] + b[3]) * 5 + b[4] * 4 + b[5] * 3 + b[6] * 2.5 + b[7] * 2;
	fz2 = b[1] * 1 + b[2] * 0.75 + b[3] * 0.5 + (b[4] + b[5] + b[6]) * 0.4 + b[7] * 0.3;
	jg1 = fz1 / (T + 5 * B);
	jg2 = fz2 / B;
	sc = jg1 * 100 + jg2 - 0.000049;
	cout << setiosflags(ios::fixed) << setprecision(4) << sc << '\n';
	return 0;
}