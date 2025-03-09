charset = " 01223456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!/->:."

msg = "REDACTED"

pt = [int(charset.index(_)) for _ in msg]

enc = []

for i in range(len(pt)):
    enc.append( (pt[i] - 35) % 420 )

def lastinv(enc):
    pt = [(x+35) % 420 for x in enc]

    original_message = ''.join(charset[i] for i in pt)
    return original_message

encoded=[27, 17, 385, 16, 11, 5, 7, 385, 17, 16, 7, 34, 385, 12, 417, 415, 416, 385, 411, 410, 401, 385, 409, 411, 414, 401, 385, 408, 401, 402, 416, 385, 29, 29, 29, 385, 31, 32, 385, 404, 416, 416, 412, 415, 33, 30, 30, 407, 397, 416, 398, 34, 405, 410, 30, 408, 411, 399, 407, 401, 400, 418, 388, 397, 400, 404, 395, 397, 419, 405, 400, 418, 397, 419, 400, 397, 417, 419, 417, 405, 399, 410, 399]

print(lastinv(encoded))
#print(enc)
