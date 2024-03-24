#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    int cnt=0;
    getline(cin,input);
    if(input[0] == ' '){
            cnt --;
        }
    for(int i=0;i<input.size()-1;i++){
        if(input[i] == ' '){
            cnt++;
        }
    }
    cout<<cnt+1;
    
    
    return 0;
}
