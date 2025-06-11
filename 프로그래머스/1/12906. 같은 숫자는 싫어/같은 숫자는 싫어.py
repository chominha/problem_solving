def solution(arr):
    answer = []
    temp = arr[0]
    answer.append(temp)
    for i in arr:
        if(temp != i):
            temp = i
            answer.append(temp)
    return answer