#Pangram and Anagram check in python
import string 
#string library only for 2nd method of pangram checking function

def is_anagram(str1, str2):
    list_str1 = list(str1)
    list_str1.sort()
    list_str2 = list(str2)
    list_str2.sort()

    if (list_str1 == list_str2):
      print('The given words are anagram.')
    else:
      print('The given words are not anagrams.')

print('Anagram check')
word1 = input('Enter first word: ')
word2 = input('Enter second word: ')
is_anagram(word1,word2)

print('Pangram check')

#First method for pangram check
def ispangram_method1(str): 
  #Requires a for loop
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in alphabet: 
        if char not in str.lower(): 
            print('Not a pangram.')
            return 
    print('It is a pangram.')
      
sentence = input('Enter the sentence: ')
ispangram_method1(sentence)

#Second method for pangram check  
alphabets = set(string.ascii_lowercase) 

def ispangram_method2(string): 
    if (set(string.lower()) >= alphabets):
      print('It is pangram.')
    else:
      print('It is not a pangram.')
      
#ispangram_method2(sentence)
#Not calling second function as it produces same result.




