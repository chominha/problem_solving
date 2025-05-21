#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;

    cin>>T;

    for(test_case = 1; test_case <= T; ++test_case)
    {
        int n=0, m=0, num;
        cin>>n>>m;
        vector<vector<int>> flymap (n,vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>num;
                flymap[i][j]=num;
            }
        }
        //한칸 고르면 기준으로 네모이기 때문에 (n-1)(n-1) 중에 택
        int max_sum=0;
        for(int i=0; i<n-m+1; i++){
            for(int j=0; j<n-m+1; j++){
                int sum=0;
                for(int x=0; x<m; x++){
                    for(int y=0; y<m; y++){
                        sum+=flymap[i+x][j+y];
                    }
                }
                max_sum = max(max_sum, sum);
            }
        }

        cout<<"#"<<test_case<<" "<<max_sum<<"\n";
    }

    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}