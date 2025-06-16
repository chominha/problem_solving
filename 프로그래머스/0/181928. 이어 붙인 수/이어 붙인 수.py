def solution(num_list):
    answer = 0
    one =''
    two =''
    for i in num_list:
        if(i%2 ==0):
            one = one + str(i)
        else:
            two = two + str(i)
    answer = int(one) + int(two)
    return answer