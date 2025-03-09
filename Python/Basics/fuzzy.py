from fuzzywuzzy import process

categories = ["Frontend Development", "Backend Development", "Database", "football"]

# Fuzzy search for categories
def fuzzy_search(query):
    return process.extractOne(query, categories)

# Example search for 'UI Development'
keyword = input()
match = fuzzy_search(keyword)
print(match)
