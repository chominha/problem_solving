def solution(num_list):
    answer = 0
    one =1
    two =0
    for i in num_list:
        one = one * i
        two += i
        
    if(one<two**2):
        answer = 1
    else:
        answer = 0
    return answer