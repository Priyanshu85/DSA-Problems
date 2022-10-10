def checkDir(a, b):
    if a == "NORTH" and b == "SOUTH":
        return True
    elif a == "SOUTH" and b == "NORTH":
        return True
    elif a == "EAST" and b == "WEST":
        return True
    elif a == "WEST" and b == "EAST":
        return True
    else:
        return False


def dirReduc(arr):
    i = 0
    while i < len(arr) - 1:
        if checkDir(arr[i], arr[i + 1]):
            arr.pop(i)
            arr.pop(i)
            i = 0
        else:
            i += 1
    return arr


a = ["NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"]
print(dirReduc(a))
u=["NORTH", "WEST", "SOUTH", "EAST"]
print(dirReduc(u))

    # i = 0
    # while i < len(arr) - 1:
    #     if checkDir(arr[i], arr[i + 1]):
    #         arr.pop(i)
    #         arr.pop(i)
    #         i = 0
    #     else:
    #         i += 1
    # return arr
