def solution(a, d, included):
    answer = 0
    for i in range(len(included)):
        print(answer)
        if(included[i]):
            if(i==0):
                answer += a
            else:
                answer += (a+ d*i)
        
    return answer