#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, answer=0;

	cin>>T;
    vector<int> numbox;
    int num=0;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin>>num;
        numbox.push_back(num);
	}
    sort(numbox.begin(), numbox.end());
    answer = numbox[numbox.size()/2];

    cout<<answer;
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}