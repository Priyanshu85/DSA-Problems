# Solution


def cakes(recipe, available):
    if (recipe.keys() <= available.keys()):
        no_of_available_recipe = []
        for i in recipe:
            no_of_available_recipe.append(available[i] // recipe[i])
            number = min(no_of_available_recipe)
    else:
        number = 0
    return number

# must return 2
print(cakes({'flour': 500, 'sugar': 200, 'eggs': 1}, {'flour': 1200, 'sugar': 1200, 'eggs': 5, 'milk': 200}))
# must return 0
print(cakes({'apples': 3, 'flour': 300, 'sugar': 150, 'milk': 100, 'oil': 100}, {'sugar': 500, 'flour': 2000, 'milk': 2000}))


# Documentation


# https://docs.python.org/3/library/stdtypes.html#dict.keys
# https://docs.python.org/3/library/stdtypes.html#dict.items
# https://docs.python.org/3/library/functions.html#min


#  Thought Process

# 1.  I need to check if the recipe is available
# 2.  If it is, I need to check how many times the recipe can be made
# 3.  I need to return the number of times the minimum recipe can be made



# Hit me up on Twitter @dapo_adedire if you have any questions or suggestions.