#include<iostream>
#include<vector>
#include<map>
using namespace std;
int res(int *a, int n) {
    int max = a[0], count = 0;
    for(int i = 0; i < n; i++) {
        if((a[i] > max) || (a[i] == max)) {
            count++;
            max = a[i];
        }
    }
    return count;
}
int main() {
    int n, count = 0;
    cout<<"Enter no. of buildings: ";
    cin>>n;
    int *blds = new int[n]();
    cout<<"Enter hights of each building sequentially: ";
    for(int i = 0; i < n; i++) {
            cin>>blds[i];
    }
    count = res(blds, n);
    cout<<count;
    return 0;
}
