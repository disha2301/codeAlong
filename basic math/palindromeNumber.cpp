#include <iostream>

using namespace std;
int checkPalindrome(int n)
{
    int temp=n;
    int rev = 0;
    while(temp!=0){
        int d = temp%10;
        rev = (rev*10) +d;
        temp/=10;
    }
    if(n==rev)
    return true;
    else
    return false;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<checkPalindrome(n);
    return 0;
}
