#include <iostream>
#include <array>

int main()
{
    int num = 0;
    int a = 0;

    std::array<int, 3> arr;
    for (int i = 0; i < arr.size(); i++) {
        std::cin >> arr[i];
    }

    if (arr[0] == arr[1] && arr[1] == arr[2]) {
        // 3개 다 같은 경우
        std::cout << 10000 + arr[0] * 1000;
    }
    else if (arr[0] == arr[1] || arr[0] == arr[2]) {
        // 2개만 같은 경우
        std::cout << 1000 + arr[0] * 100;
    }
    else if (arr[1] == arr[2]) {
        // 2개만 같은 경우
        std::cout << 1000 + arr[1] * 100;
    }
    else {
        // 모두 다른 경우
        int max_num = arr[0];
        if (arr[1] > max_num) max_num = arr[1];
        if (arr[2] > max_num) max_num = arr[2];
        std::cout << max_num * 100;
    }

    return 0;
}

/*
int main()
{
    int num=0;
    int a=0;

    std::array<int, 3> arr;
    for (int i = 0; i < arr.size(); i++) {
        std::cin >> arr[i];
    }

    if(arr[0]==arr[1]){
        num +=1;
        a = arr[0];
    }
    if(arr[0]==arr[2]){
        num +=1;
        a = arr[0];
    }
    if(arr[1]==arr[2]){
        num +=1;
        a = arr[1];
    }
    if(num==2){
        std::cout<<10000+a*1000;
    }
    else if(num==1){
        std::cout<<1000+a*100;
    }
    else{
        if(arr[0]>arr[1]){
            if(arr[0]>arr[2]){
                std::cout<<arr[0]*100;
            }
            else{
                std::cout<<arr[2]*100;
            }
        }
        else{
            if (arr[1]>arr[2]){
                std::cout<<arr[1]*100;
            }
            else{
                std::cout<<arr[2]*100;
            }
        }

    }
    
    
    return 0;
}


3개 숫자 받고
같은 눈 3개 -  10,000+같은 눈 * 1,000
같은눈 2개 -  1,000+같은 눈 * 100
모두 다른눈 - 가장 큰 눈 * 100

같은 눈 개수 확인

*/