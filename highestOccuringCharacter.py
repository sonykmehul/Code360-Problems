from sys import stdin

def highestOccuringChar(string) :
	data = {}
	for s in string:
		if s not in data:
			data[s] = 1
		else:
			data[s] += 1  

	val = 0
	character = 'a'
	for char, freq in data.items():
		if freq > val:
			val = freq
			character = char

	return character