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
        vector<int> vi;
        int sum=0;
        int str;
        for(int i=0; i<10; i++){
            cin>>str;
            if(str%2!=0){
                sum+= str;
        }
        }
            answer.push_back(sum);
           
        
	}
    for(int i =1; i<T+1; i++){
                cout<<"#"<<i<<" "<<answer[i-1]<<"\n";
            }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}