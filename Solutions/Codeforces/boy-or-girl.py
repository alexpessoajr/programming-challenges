
username = input()
letters = set()

for l in username:
  letters.add(l)

print("CHAT WITH HER!" if len(letters) % 2 == 0 else "IGNORE HIM!")

