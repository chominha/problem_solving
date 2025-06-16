def solution(numLog):
    answer = ''
    num=numLog[0]
    for i in range(len(numLog)):
        if(num-numLog[i]==-1):
            answer +='w'
            num=numLog[i]
        elif(num-numLog[i]==1):
            answer +='s'
            num=numLog[i]
        elif(num-numLog[i]==10):
            answer +='a'
            num=numLog[i]
        elif(num-numLog[i]==-10):
            answer +='d'
            num=numLog[i]
    return answer