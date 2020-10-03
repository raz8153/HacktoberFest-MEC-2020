'''
Python 3
uTF 8
THIS PYTHON PROGRAM CONTAINS FUNCTION WHICH CHECKS THE VAIDITY OF A EMAIL ADDRESS.
IT HAS USED THE REGULAR EXPRESSION MODULE , BY WHICH FORMAT OF THE EMAIL ENTERED CAN
BE CHECKED.
'''

import re

#making regular expressions

regex = '^[a-z0-9]+[\._]?[a-z0-9]+[@]\w+[.]\w{2,3}$'  

#definition for validation check starts

def verify(email):  
    if(re.search(regex,email)):  #search() method is used
        print("Valid Email")  
          
    else:  
        print("Invalid Email")   #if it is not at par with regular expression

noOfRepeats=int(input(("Enter no. of E-Mails you want to check:-")))

for _ in range(noOfRepeats):
    mailId=input("Mail Id:-")
    verify(mailId)


#SAMPLE OUTPUTS#
'''
>>>Enter no. of E-Mails you want to check:- 3
>>>Mail Id:-k.sabarii.ganesh@gmail.com
Valid Email
>>>Mail Id:-someexample@outlook.com
Valid Email
>>>Mail Id:-github.com
Invalid Email
'''
    
    
