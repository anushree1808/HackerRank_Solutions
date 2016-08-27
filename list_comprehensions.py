# for nested loops
# Enter your code here. Read input from STDIN. Print output to STDOUT

k = int(raw_input())
m = int(raw_input())
n = int(raw_input())
N = int(raw_input())

li = [[x,y,z] for x in range(k+1) for y in range(m+1) for z in range(n+1) if x+y+z != N]
print li
