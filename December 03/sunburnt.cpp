#include<iostream>
#include<tuple>
using namespace std;
tuple <int, int> largest(int n, int *a) {
    int i, max = a[0];
    for(i = 0; i < n; i++) {
            if(a[i] > max) {
                    max = a[i];
            }
    }
    return make_tuple(i, max);
}
int main() {
    int n, ind, val, max;
    cout<<"Enter no. of buildings: ";
    cin>>n;
    int *blds = new int[n]();
    cout<<"Enter hights of each building sequentially: ";
    for(int i = 0; i < n; i++) {
            cin>>blds[i];
            if(max < blds[i]) {
                max = blds[i];
            }
    }
    cout<<max;
    // tie(ind, val) = largest(n, blds);
    // cout<<--ind<<": "<<val;
    return 0;
}

