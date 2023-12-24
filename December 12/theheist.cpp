#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<string>> box(3, vector<string>(4, ""));
    cout<<"Enter elements of each box: "<<endl;
    for(int i = 0; i < 3; i++)
    {
        cout<<"For Box "<<i<<":"<<endl;
        // vector<string> temp(4);
        for(int j = 0; j < 4; j++)
        {
            string str;
            cin>>str;
            // temp.push_back(str);
            // box[i].push_back(str);
            box[i][j] = str;
        }
        // box.push_back(temp);
        sort(box[i].begin(), box[i].end());
    }
    for(int i = 0; i < box.size(); i++)
    {
        bool res = binary_search(box[i].begin(), box[i].end(), "Gold");
        if(res == true)
            cout<<"Box no. "<<i;
    }
    return 0;
}
