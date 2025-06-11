def solution(my_string, overwrite_string, s):
    answer = ''
    if(len(my_string)-(len(overwrite_string)+s)>0):
        last = s+len(overwrite_string)
        answer = answer = my_string[:s]+overwrite_string+my_string[last:]
    else:
        answer = my_string[:s]+overwrite_string
    return answer