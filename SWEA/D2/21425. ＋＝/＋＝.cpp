#include<bits/stdc++.h>

using namespace std;
vector<int> answer;
int main(int argc, char** argv)
{
    int test_case;
    int T;

    cin>>T;

    for(test_case = 1; test_case <= T; ++test_case)
    {
        int a, b, c;
        int count=0;
        cin>>a>>b>>c;
        while(a<=c and b<=c){
            if(a>b){
                b+=a;
                count +=1;
                if(b>c){
                    answer.push_back(count);
                }
            }else{
                a+=b;
                count +=1;
                if(a>c){
                    answer.push_back(count);
                }
            }
        }
    }
    for(int i : answer){
        cout<<i<<"\n";
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}//