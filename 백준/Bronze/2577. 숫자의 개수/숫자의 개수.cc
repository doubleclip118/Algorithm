#include <iostream>
using namespace std;
int main()
{
    int list[10] ={0,};
    
    int a,b,c;
    cin>>a>>b>>c;
    int mul=a*b*c;
    while(mul!=0){
        list[mul%10]++;
        mul/=10;
    }
    for(auto k: list){
        cout<<k<<"\n";
    }
    
}
