#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    vector<int> answer;

    cin>>T;

    for(test_case = 1; test_case <= T; ++test_case)
    {
        int num=0;
        string s = to_string(test_case);
        for(char c : s){
            if(c=='3' or c=='6' or c=='9'){
                cout<<"-";
                num++;
            }
        }
        if(num==0){
            cout<<test_case;
        }
        cout<<" ";//밖에 빼기
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}