import sys
s = raw_input().strip()
count = 1
for st in s:
    if st.istitle():
        count += 1
print count
