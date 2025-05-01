/*
키만 출력
for (const auto& pair : strMap) {
    std::cout << pair.first << " ";
}
값만 출력
for (const auto& pair : strMap) {
    std::cout << pair.second << " ";
}
*/
#include <iostream>
#include <map>
#include <string>
#include <cctype> //toupper

int main(){
    std::map<char, int> strMap;
    std::string str;
    std::cin>>str;

    for (char& c : str) {
        c = toupper(c);
        strMap[c]++;
    }
    auto it = strMap.begin(); 
    int maxFreq = it->second;
    char mostChar = it->first;
    bool isDuplicate = false;

    for (const auto& pair : strMap) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            mostChar = pair.first;
            isDuplicate = false;
        } else if (pair.second == maxFreq && pair.first != mostChar) {
            isDuplicate = true;
        }
    }

    std::cout << (isDuplicate ? '?' : mostChar);

    return 0;
    
}

/*
str[i]를 뽑아서 돌아가며 몇개인지 센다.
키에 글자 넣기?

맵으로 글자:키로 받은 후
키 순서대로 정렬?
맨 끝과 맨끝의 앞의 키를 비교해서 같으면 ? 다르면 젤 큰거 반환?
*/