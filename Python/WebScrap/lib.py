import requests

# URL to send the request
url = "https://webopac.vit.ac.in/index.html"

# Headers for the request
headers = {
    "Host": "webopac.vit.ac.in",
    "Cache-Control": "max-age=0",
    "Sec-Ch-Ua": '"Chromium";v="121", "Not A(Brand";v="99"',
    "Sec-Ch-Ua-Mobile": "?0",
    "Sec-Ch-Ua-Platform": '"Linux"',
    "Upgrade-Insecure-Requests": "1",
    "Origin": "https://webopac.vit.ac.in",
    "Content-Type": "application/x-www-form-urlencoded",
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.6167.160 Safari/537.36",
    "Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7",
    "Sec-Fetch-Site": "same-origin",
    "Sec-Fetch-Mode": "navigate",
    "Sec-Fetch-User": "?1",
    "Sec-Fetch-Dest": "document",
    "Referer": "https://webopac.vit.ac.in/",
    "Accept-Encoding": "gzip, deflate, br",
    "Accept-Language": "en-US,en;q=0.9",
    "Connection": "close",
}

# Cookie from the request
cookies = {
    "CGISESSID": "e642b87d310b04833fcf40584a611410",
}

# Login payload
payload = {
    "koha_login_context": "opac",
    "userid": "24BCE2189",  # Replace with the desired registration number
    "password": "24BCE2189",  # Replace with the desired password
}


payload2 = {
    "koha_login_context": "opac",
    "userid": "24BCE2189",  # Replace with the desired registration number
    "password": "24BCE189",  # Replace with the desired password
}

# Send the POST request
response = requests.post(url, headers=headers, cookies=cookies, data=payload)
response2 = requests.post(url, headers=headers, cookies=cookies, data=payload2)

# Check the response
if response.status_code == 200:
    print("Login successful!")
    #print(response.text)  # Response HTML
    a=response.text
else:
    print(f"Login failed with status code {response.status_code}")

print(a.find("incorrect"))
b=response2.text
print(b.find("incorrect"))
