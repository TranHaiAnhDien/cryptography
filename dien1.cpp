#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cases = 1;
    while (cases <= t)
    {
        int n, m;
        cin >> n >> m;
        int total = 0, tmp;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            total += tmp;
        }
        cout << "Case #" << cases << ": " << total % m << endl;
        cases++;
    }

    return 0;
}