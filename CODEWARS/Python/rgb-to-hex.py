def check_limit(value):
    if value < 0:
        value = 0
    elif value > 255:
        value = 255
    return value

def rgb(r, g, b):
    hex_code = []
    for i in [check_limit(r), check_limit(g), check_limit(b)]:
        hex_code.append(hex(i)[2:].zfill(2).upper())
        

    return "".join(hex_code)

print(rgb(255, 255, 255))
print(rgb(255, 255, 300))
print(rgb(0, 0, 0))
print(rgb(148, 0, 211))
print(rgb(-20, 275, 125))