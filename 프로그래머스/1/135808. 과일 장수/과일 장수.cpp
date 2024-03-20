#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(),score.end(),compare);
    for(int i = 1;i<=score.size()/m;i++){
        answer+=score[m*i-1]*m;
    }
    return answer;
}