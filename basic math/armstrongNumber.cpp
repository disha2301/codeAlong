#include <iostream>

using namespace std;
int checkArmstrong(int n)
{
    int sum=0;
    int temp=n;
    while(temp!=0){
        int d = temp%10;
        sum+=(d*d*d);
        temp/=10;
    }
    if(n==sum)return true;
    else return false;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<checkArmstrong(n);
    return 0;
}
