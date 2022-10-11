#take number of values from a user for a list
x = int(input('enter a value'))

#define empty list to store values
lst = []

#apply for loop for given range
for i in range(0,x):

#take input from user, ask for values in a list
    l = int(input('enter numbers for list'))

#append those values to the list by using append() function
    lst.append(l)

#print the list
print(lst)
