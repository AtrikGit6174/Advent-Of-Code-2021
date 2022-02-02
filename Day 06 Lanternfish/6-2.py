listy= map(int, input().split(','))
dicty= dict() #days d: no. of fish that will give birth in d days
days= 256

for i in range(0, 9):
    dicty[i]= 0
    
for item in listy:
    dicty[item]+= 1

while (days>0):
    temp= dicty[0]
    for i in range(0, 8):
        dicty[i]= dicty[i+1]
    dicty[8]= temp
    dicty[6]+= temp
    days-= 1

count= 0
for value in dicty.values():
    count+= value

print(count)