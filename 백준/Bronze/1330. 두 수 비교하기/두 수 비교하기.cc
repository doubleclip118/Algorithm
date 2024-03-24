#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    int tmp1,tmp2;
    cin>>tmp1>>tmp2;
    if(tmp1<tmp2){
        cout<<"<";
    }
    else if(tmp1==tmp2){
        cout<<"==";
    }
    else{
        cout<<">";
    }
}
