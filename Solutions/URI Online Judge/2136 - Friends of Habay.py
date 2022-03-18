
registration = raw_input()
first_friend = None
friends = {}
non_friends = {}

while registration != 'FIM':
  name, friend_of_habay = registration.split()

  if friend_of_habay == 'YES':
    if not first_friend or len(first_friend) < len(name):
      first_friend = name
    friends[name] = True
  else:
    non_friends[name] = True

  registration = raw_input()

for friend in sorted(friends.keys()):
  print friend

for non_friend in sorted(non_friends.keys()):
  print non_friend

print "\nAmigo do Habay:"
print first_friend
