#3 in 1 Code to 
#Check palindrome 
#Frequency of occurence of a chara in a string
# Convert given string into ASCII

def check_palindrome(word):
  if word == word[::-1]:
    print("It is a palindrome.")
  else:
    print("It is not a palindrome.")

def check_frequency(word):
  frequency = {}
  for chara in word:
    if chara in frequency:
      frequency[chara] += 1
    else:
      frequency[chara] = 1
  print('Character frequency is as follows:')
  print(frequency)

def convert_ASCII(word):
  result = [str(ord(c)) for c in word]
  print('ASCII converted code: ',end = "")
  print(''.join([i for i in result]))

string = input("Enter the string: ")
print()
check_palindrome(string.lower().strip())
check_frequency(string.upper().strip())
convert_ASCII(string.strip())