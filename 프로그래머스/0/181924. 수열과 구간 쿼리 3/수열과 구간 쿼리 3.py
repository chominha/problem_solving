def solution(arr, queries):
    answer = []
    for i in queries:
        j,k = i[0], i[1]
        temp = arr[j]
        arr[j] = arr[k]
        arr[k] = temp
    answer = arr
    return answer