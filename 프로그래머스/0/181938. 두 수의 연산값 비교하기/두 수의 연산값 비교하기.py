def solution(a, b):
    answer = 0
    one = str(a) + str(b)
    two = 2*a*b
    if(int(one)==two):
        answer = two
    elif(int(one)>two):
        answer = int(one)
    else:
        answer = two
    return answer