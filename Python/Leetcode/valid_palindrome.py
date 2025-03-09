#s = "A man, a plan, a canal: Panama"
s="0P"
a=""
for i in s:
    if i.isalnum():
        a+=i.lower()
if a == a[::-1]:
    print(True)
else:
    print(False)
