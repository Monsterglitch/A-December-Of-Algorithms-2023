#include<iostream>
using namespace std;
int main() {
    int i, n, sum, avg;
    cout<<"Enter no. thieves: ";
    cin>>n;
    int *stln = new int[n]();
    cout<<"Enter amounts stolen by each thief sequentially: ";
    for(i = 0; i < n; i++) {
            cin>>stln[i];
            sum += stln[i];
    }
    avg = sum / n;
    cout<<avg;
    i = 0, sum = 0;
    while(i < n) {
        sum += (stln[i] > avg) ? stln[i] : 0;
    }
    cout<<endl<<sum;
}

