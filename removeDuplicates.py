def removeConsecutiveDuplicates(string):
    data = {}
    newString = []
    for s in string:
        if not newString or s != newString[-1]:
            newString.append(s)
    
    return ''.join(newString)

# Main
string = input().strip()
print(removeConsecutiveDuplicates(string))