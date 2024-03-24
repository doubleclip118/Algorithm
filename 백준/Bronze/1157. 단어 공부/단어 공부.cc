#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    int nameList[27] = {0,};
    string input;
    cin>>input;
    
    for(int i =0;i<input.length();i++){
        char tmp=toupper(input[i]);
        nameList[tmp-65]++;
    }
    int max=0;
    int cnt=0;
    int flag=-1;
    
    for(int i =0;i<26;i++){
        if(max<nameList[i]){
            max = nameList[i];
        }
    }
    for(int i =0;i<26;i++){
        if(max==nameList[i]){
            cnt++;
            flag=i;
        }
    }
    if(cnt>1){
        cout<<"?";
    }
    
    else{
        cout<<(char)(flag+65);
    }
    
}
