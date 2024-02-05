#include <iostream>
#include "test.h"
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int res = suma(x, y);
    int ans = razn(x, y);
    cout<<res;
    return 0;
}
