#include<bits/stdc++.h>
using namespace std;

void reverse(string str)
{
    int i, j, length = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for(j = length - 1; j >= 0; j--)
    {
        if((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z'))
        {
            cout << str[j];
        }
        else
        {
            cout << "INVALID";
            return;
        }
    }
}

int main()
{
    string str;
    cout << "Enter any string: ";
    cin >> str;
    reverse(str);
    return 0;
}
