import sys

K = int(sys.stdin.readline())

for t in range(1, K + 1):
    N = int(sys.stdin.readline())
    dic = dict()

    for _ in range(N):
        st = sys.stdin.readline().strip()
        num = int(sys.stdin.readline())
        dic[st] = num

    s = sys.stdin.readline()
    score, idx = 0, 0
    for i, j in dic.items():
        idx = 0
        while idx >= 0:
            idx = s.find(i, idx)
            if idx >= 0:
                idx += 1
                score += j

    print("Data Set %d:" %t)
    print(score)
