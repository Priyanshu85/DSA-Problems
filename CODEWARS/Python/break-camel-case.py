# Solution

def solution(s):
    for i in s:
        if i.isupper():
            if (s[s.index(i)-1] == " ") or (s[s.index(i)-1] == "-"):
                pass
            else:
                s = s.replace(i, ' ' + i)
    return s

print(solution("camelCasingMe"))
print(solution("highPublicWorldFactProblem"))
print(solution("break  Camel  Case"))


# Documentation
# https://docs.python.org/3/library/stdtypes.html#str.replace
# https://docs.python.org/3/library/stdtypes.html#str.isupper
# https://docs.python.org/3/library/stdtypes.html#str.index


#  Thought Process

# 1.  I need to iterate through the string
# 2.  I need to check if the character is uppercase
# 3.  If it is, I need to check if the character before it is a space or a dash
# 4.  If the character before it is upper case, I need to skip it.
# 5.  If it is not, I need to replace the character with a space and the character
# 6.  I need to return the string.

# Hit me up on Twitter @dapo_adedire
