#include <iostream>
using namespace std;

int main() {
    int i, n, sum = 0, avg;
    cout << "Enter no. thieves: ";
    cin >> n;
    int stln[n];
    cout << "Enter amounts stolen by each thief sequentially: ";
    for (i = 0; i < n; i++) {
        cin >> stln[i];
        sum += stln[i];
    }
    avg = sum / n;
    i = 0, sum = avg;
    while (i < n) {
        sum += (stln[i] > avg) ? stln[i] : 0;
        i++;
    }
    cout<<"Sum of elements greater than or equal to average: "<<sum;
    return 0;
}
