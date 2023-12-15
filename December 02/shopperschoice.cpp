#include<iostream>
#include<map>
using namespace std;
int main() {
        int n;
        map<int, int> res;
        map<int, int>::iterator iter;
        cout<<"Enter total no. of product IDs"<<endl;
        cin>>n;
        cout<<"Enter all the product IDs sequentially"<<endl;
        int *ids = new int[n]();
        for(int i = 0; i < n; i++) {
                cin>>ids[i];
                if(res.find(ids[i]) != res.end()) {
                        res[ids[i]] += 1;
                } else {
                        res[ids[i]] = 1;
                }
        }
        for(iter = res.begin(); iter != res.end(); ++iter) {
                cout<<iter->second<<endl;
        }
        return 0;
}

