#! python3

'''
def lock(message, key):
      k = (key*50)[:len(message)]                     
      locked = []                                     
      for _ in range(len(message)):                   
          locked.append(ord(message[_]) ^ ord(k[_]))  
      return locked
'''

def lock(message, key):
    k = (key*50)[:len(message)]

    locked = []
    for i in range(len(message)):
        locked.append(ord(message[i]) ^ ord(k[i] ) )

    return locked

def decode(locked, key):
    messages = []
    k = (key*50)[:len(locked)]
    for i in range(len(locked)):
        messages.append(chr(locked[i] ^ ord(k[i])))
    return messages

lock = [63, 91, 28, 102, 95, 3, 15, 91, 85, 1, 49, 40, 95, 20, 5, 39, 72, 71, 58, 4, 66, 
 14, 94, 23, 35, 16, 24, 10, 107, 70, 23, 42, 92, 15, 7, 16, 1, 28, 54, 55, 16, 
 77, 78, 60, 28, 71, 34, 18, 88, 77, 30, 31, 41, 68, 14, 75, 34, 93, 86, 116, 86, 
 13, 31, 73, 42, 66, 58, 37, 82, 64, 86, 48, 14, 86];

key = "K3yF3ll0ut_D0wnTh3Rabb1tH0le"

mess = decode(lock, key)
print(''.join(mess))
