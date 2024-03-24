#include <iostream>
#include <string>
using namespace std;
int main()
{
    int loop;
    cin>>loop;
    for(int i=0;i<loop;i++){
        int tmp;
        string word;
        cin>>tmp>>word;
        
        for(int j=0;j<word.length();j++){
            for(int k=0;k<tmp;k++){
                cout<<word[j];
            }
        }
        cout<<"\n";
    }
}
