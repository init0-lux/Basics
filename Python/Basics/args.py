from sys import argv, exit

if len(argv) < 2:
    print("./args.py <youruser> <yourpassword>\n\nexample: ./args.py init0 init0")
    exit(0)

users = { argv[1] : {'password' : argv[2]} }

print(users)
print(users[argv[1]]['password'])
