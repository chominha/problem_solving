def solution(a, b):
    answer = 0
    one = str(a) + str(b)
    two = str(b) + str(a)
    if(int(one)>int(two)):
        answer = int(one)
    else:
        answer = int(two)
    return answer