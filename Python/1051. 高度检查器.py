def heightChecker(heights):
    r = heights[:]
    r.sort()
    ans = 0
    for i in range(0,len(r)):
        if r[i] != heights[i]:
            ans += 1
    return ans

height = [1,1,4,2,1,3]
print(heightChecker(height))