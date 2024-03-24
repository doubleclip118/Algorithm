#include <iostream>
#include <algorithm>
using namespace std;

int list[10000000];
int main()
{
    int loop;
    cin>>loop;
    for(int i=0;i<loop;i++){
        int tmp;
        cin>>tmp;
        list[i]=tmp;
    }
    cout<<*min_element(list,list+loop)<<" "<<*max_element(list,list+loop);
    
    
}