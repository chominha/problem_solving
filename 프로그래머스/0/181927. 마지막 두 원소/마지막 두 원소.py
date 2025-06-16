def solution(num_list):
    answer = []
    i, j = num_list[-2:]
    if(j>i):
        num_list.append(j-i)
        
    else:
        num_list.append(j*2)
    answer = num_list
    return answer