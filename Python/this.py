import os
import sys
import time

import keyboard
import pyperclip
from pynput.keyboard import Controller

import google.generativeai as genai

def gemini_response(prompt):
    model = genai.GenerativeModel("gemini-1.5-flash")
    response = model.generate_content(prompt)
    print()
    print(response.text)
    print()
    return response.text if response and response.text else ""

def type_clipboard():
    text = pyperclip.paste()

    prompt = PROMPT_PREFIX + text
    response_text = gemini_response(prompt)

    time.sleep(2)

    keywriter.type(response_text)

def exit_program():
    print("Exiting...")
    sys.exit()

API_KEY = "AIzaSyB29pv5SVysbPYShuEt8ZKhMAS-L2ZpqV8"

###### For C++
#PROMPT_PREFIX = "Generate only code for this, in C++. Generate only simplme code. The main function should always be int main(){} with a return of 0. "

##### For C
PROMPT_PREFIX = "Generate only code for this, in C. Generate only simplme code. The main function should always be int main(){} with a return of 0. "

print("Setting up environment...");
keywriter = Controller() # setup pynput
genai.configure(api_key = API_KEY)

keyboard.add_hotkey('ctrl+space', type_clipboard)
keyboard.add_hotkey('ctrl+alt', exit_program)
keyboard.wait()
