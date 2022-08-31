def maxLengthBetweenEqualCharacters(s):
    ans = []
    for i in s:
        if s.count(i) > 1:
            ans.append(s[s.index(i)+1:s.rindex(i)])
    ans.sort(key=lambda x: len(x))
    if len(ans) == 0:
        return -1
    else:
        return len(ans[len(ans)-1])


s = "cabbac"
print(maxLengthBetweenEqualCharacters(s))
