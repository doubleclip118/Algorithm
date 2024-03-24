#include <iostream>
using namespace std;

int main()
{
    int loop,sum=0;
    cin>>loop;
    string tmp;
    cin>>tmp;
    for(int i=0;i<tmp.length();i++){
        sum+=tmp[i]-48;
    }
    
    
    
    cout<<sum;
    
}