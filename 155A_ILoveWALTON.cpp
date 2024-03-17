#include <iostream>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    int min=p, max=p, count=0;
    for(int i=1; i<n; i++)
    {
        cin >> p;
        if (p < min)
        {
            min = p;
            count++;
        }
        if (p > max)
        {
            max = p;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
