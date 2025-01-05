from sys import stdin

def removeAllOccurrencesOfChar(string, ch) :
	result = []
	for s in string:
		if s != ch:
			result.append(s)

	return ''.join(result)
	