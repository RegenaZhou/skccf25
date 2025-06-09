/*e 1 3 10
f  2 4  11
1+4+19*/
#include<iostream>
#include<string>
using namespace std;
string s;
void solve()
{
    int ez = 0, js = 0, sc = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == 'e')
        {
            ez += i;
            js++;
        }
        else if (s[i] == 'f')
        {
            sc += i * js - ez;
        }
    }
    cout << sc << '\n';
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    cin.ignore();
    getline(cin, s);
    solve();
    for (int i = 1; i <= m; i++)
    {
        int wz; char c;
        cin >> wz >> c;
        s[wz - 1] = c;
        solve();
    }
    return 0;
}