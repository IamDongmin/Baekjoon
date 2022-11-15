#include<iostream>
#include<string.h>

using namespace std;

int cnt = 1;

int count()
{
    cnt += 1;
    return cnt;
}
int recursion(const char *s, int l, int r)
{
    if(l >= r) 
    {
        return 1;
    }
    else if(s[l] != s[r])
    {
        return 0;
    }
    else
    {
        count();
        return recursion(s, l+1, r-1);
    }
}
int isPalindrome(const char *s)
{
    return recursion(s, 0, strlen(s)-1);
}
int main()
{
    int T;
    char string[1001];
    
    cin >> T;
    
    for(int i = 0; i < T; i++)
    {
        cin >> string;
        
        cout << isPalindrome(string) << " ";
        cout << cnt << endl;
        cnt = 1;
    }
}