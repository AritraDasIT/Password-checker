import string
import random

if __name__ == "__main__":

 str1= string.ascii_lowercase
 str2= string.ascii_uppercase
 str3= string.digits
 str4= string.punctuation
 
 p_len= int(input("Enter the password length: "));
 s=[] #empty list

 s.extend(str1)
 s.extend(str2)
 s.extend(str3)
 s.extend(str4)


random.shuffle(s)

print("YOUR PASSWORD IS : ")
print("".join(s[0:p_len]))
