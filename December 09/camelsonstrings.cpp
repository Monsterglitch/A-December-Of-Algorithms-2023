#include <iostream>
#include <cstring>
using namespace std;

int camel(char* s)
{
    int count = 1;
    for(int i = 0; s[i] != '\0';[[I i++)
    {
        if(isupper(s[i]) && (i != 0))
        {
            count += 1;
        }
    }
    return count;
}

int main()
{
    char s[] = "SaveChangesInTheEditor";
    int x = sizeof(s);
    cout<<x<<endl;
    int res = camel(s);
    cout<<res;
    return 0;
}
