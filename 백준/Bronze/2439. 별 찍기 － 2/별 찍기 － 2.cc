#include <iostream>

using namespace std;
int main()
{
    int loop;
    cin>>loop;
    for(int i=1;i<=loop;i++){
        for(int k=0;k<loop-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
