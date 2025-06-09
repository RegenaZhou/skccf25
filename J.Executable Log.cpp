#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long long n, js = 0;
    cin >> n;
    cin.ignore();
    for (long long i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        long long wz = 0;
        bool flag = false;
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (s[i] == '.')
            {
                wz = i;
                flag = true;
            }
        }
        if (flag)
        {
            if (s[wz + 1] == 'l' && s[wz + 2] == 'o' && s[wz + 3] == 'g')
            {
                if (s[(int)s.size() - 1] == 'x') js++;
            }
        }
    }
    cout << js << '\n';
    return 0;
}