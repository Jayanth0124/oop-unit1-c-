#include<iostream>
#include<string.h>
using namespace std;
class pal
{
    char s[100];
public:
    pal()
    {
        strcpy(s,"");
    }
    pal(char str[])
    {
        strcpy(s,str);
    }
    int checkpal()
    {
        int i,flag=0;
        for(i=0;i<strlen(s)/2;i++)
        {
            if(s[i]!=s[strlen(s)-i-1])
                flag=1;
        }
        if(flag==0)
            return 1;
        else
            return 0;
    }
};
int main()
{
    char str[100];
    int i;
    cout<<"Enter string : ";
    cin>>str;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'||str[i]>='0'&&str[i]<='9')
            continue;
        else
        {
            cout<<"INVALID";
            return 0;
        }
    }
    pal p(str);
    if(p.checkpal()==1)
        cout<<"Palindrome";
    else
        cout<<"Not palindrome";
    return 0;
}
