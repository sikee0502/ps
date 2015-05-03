#include<iostream>
using namespace std;

int n, m;

double f(int wins)
{
    return (double)(m + wins) / (double)(n + wins);
}

void solve()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
	cin >> n >> m;

	// 연속으로 승리한 횟수를 1부터 늘려가면서 처음으로 1%가 올랐을 때를
	// 찾아낸다.
	int wins;
	for (wins = 1; wins <= 2e+9 && f(wins) - f(0) < 1e-2; wins++);

	if (wins > 2e+9) cout << -1 << endl;
	else cout << wins << endl;
    }
}

int main()
{
    solve();
    return 0;
}
