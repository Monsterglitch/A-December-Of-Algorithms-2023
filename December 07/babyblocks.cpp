#include <iostream>
#include <cmath>
using namespace std;

bool isFit(int a, int b, int c)
{
    float diag = sqrt(pow(a, 2) + pow(b, 2));
    return (diag <= (float)2*c);
}

int main()
{
    int width = 5, height = 9, radius = 5;
    cout<<isFit(width, height, radius);
    return 0;
}

