s = input("Enter string: ")

def is_palindrome(s):
    s = s.lower().replace(" ", "")
    return s == s[::-1]

print("Is the string palindrome?", is_palindrome(s))