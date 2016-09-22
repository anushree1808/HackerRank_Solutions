# Enter your code here. Read input from STDIN. Print output to STDOUT

st = raw_input().strip()
st = st.lower()
l = [0]*26
for s in st:
    if s== " ":
        continue
    else :
        l[ord(s)-97] = 1
truth = True
for i in l:
    if i == 0:
        truth = False
        break
if truth :
    print "pangram"
else :
    print "not pangram"
