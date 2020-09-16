
sentence=input()
key=input()
cipher=""
print(ord(" "))
for i in range(len(sentence)):
    ord_char=ord(sentence[i])+int(key)%26
    if ord(sentence[i]) == 32:
        character=" "
    elif int(ord_char) > 122:
        character=chr(97+(ord_char-122))
    else:
        character=chr(ord_char)
    cipher+=character
print(cipher)
