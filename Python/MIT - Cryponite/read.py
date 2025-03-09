with open('orig', 'r') as data:
    a=data.read()

print("\n\n", type(a))
print(type(list(a)))

print(a)

c=0
for i in a:
    c+=1
print(c)
