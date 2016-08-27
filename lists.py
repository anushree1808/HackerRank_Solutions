# Enter your code here. Read input from STDIN. Print output to STDOUT

number = int(raw_input().strip())

l = []

for i in range (number):
    inp = raw_input().split(" ")
    command = inp[0]
    if command == "insert":
        l.insert(int(inp[1]),int(inp[2]))
    elif command == "print":
        print (l)
    elif command == "remove":
        l.remove(int(inp[1]))
    elif command == "append":
        l.append(int(inp[1]))
    elif command == "sort":
        l.sort()
    elif command == "pop":
        l.pop()
    elif command == "reverse":
        l.reverse()
