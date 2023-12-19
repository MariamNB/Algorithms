def LCS(s1: str, s2: str):

    rows = len(s1) + 1
    cols = len(s2) + 1

    dp = [[0 for j in range (cols)] for i in range (rows)]

    for i in range (1, rows):

        for j in range (1, cols):

            if s1[i - 1] == s2[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1

            else:
                dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1])

    #return dp[rows - 1][cols - 1]

    # find the lcs
    subseq = []
    i = rows - 1
    j = cols - 1

    while i > 0 and j > 0:
        if dp[i][j] != dp[i-1][j]:
            subseq.append(s1[i-1])
            i -= 1
            j -= 1
        else:
            i -= 1

    return dp [rows-1][cols-1] ,  subseq[:]

print(LCS("hello world", "ohelod"))
# (5, ['h', 'e', 'l', 'o', 'd'])
