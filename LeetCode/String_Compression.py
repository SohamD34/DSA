# chars = ["a","a","b","b","c","c","c"]
# chars = ["a"]
chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]

s = sorted(set(chars))
ans = []

for i in s:
    ans.append(i)
    c = chars.count(i)

    if(c!=1):
        ans.append(str(c))

print(ans)