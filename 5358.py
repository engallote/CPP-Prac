import sys

while True:
    name = sys.stdin.readline().rstrip()
    if name == "":
        break
    arr = []
    for i in name:
        if i == 'i':
            arr.append('e')
        elif i == 'I':
            arr.append('E')
        elif i == 'e':
            arr.append('i')
        elif i == 'E':
            arr.append('I')
        else:
            arr.append(i)

    print(''.join(arr))