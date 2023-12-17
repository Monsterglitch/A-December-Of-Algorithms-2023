
#include <iostream>

using namespace std;

string mirrormagic(string str) {
    int left = 0, right = str.length() - 1, cnt = 0, ansl = 0, ansr = 0;
    string fin;
    while(left < right) {
        if((int)str[left] == (int)str[right]) {
            cnt += 1;
            ansl = left;
            ansr = right;
        }
        left++;
        right--;
    }
    if(cnt > 0) {
        for(int i = ansl; i <= ansr; i++) {
            fin += str[i];
        }
    } else {
        return "Error";
    }
    return fin;
    
}
int main()
{
    string s;
    cout<<"Enter String : ";
    cin>>s;
    string res = mirrormagic(s);
    cout<<res;
    return 0;
}

