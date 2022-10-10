# Solution
def move_zeros(lst):
    for i in lst:
        if i == 0:
            lst.remove(i)
            lst.append(i)
    return lst

print(move_zeros([1, 2, 0, 1, 0, 1, 0, 3, 0, 1]))

# Documentation

# https://docs.python.org/3/tutorial/datastructures.html#more-on-lists
# https://docs.python.org/3/library/stdtypes.html#list.remove
# https://docs.python.org/3/library/stdtypes.html#list.append




#  Thought Process

# 1.  I need to iterate through the list
# 2.  I need to check if the item is 0
# 3.  If it is, I need to remove it from the list
# 4.  I need to append it to the end of the list
# 5.  I need to return the list



# Hit me up on Twitter @dapo_adedire if you have any questions or suggestions.