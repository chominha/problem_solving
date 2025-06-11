def solution(s):
    answer = ''
    size = len(s)
    if(size%2==0):
        answer = s[size//2-1]+s[size//2]
    else:
        answer = s[size//2]
    return answer