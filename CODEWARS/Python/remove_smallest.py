

def remove_smallest(numbers):
    mini = numbers[0]
    for i in numbers:
        if i < mini:
            mini = i
    numbers.remove(mini)
    return numbers

numbers = [1, 12, 3, 0, 5, -3, 7, 8, 9, 10]
print(remove_smallest(numbers))
# numbers.remove(10)
# print(numbers)