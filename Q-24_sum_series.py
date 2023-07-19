n = int(input("Enter the number of terms: "))

sum = 0
sign = 1
number = 1

for i in range(n):
    sum += sign * number
    sign *= -1
    number += 2

print("The sum of the series is:", sum)
#Output:
"""
Enter the number of terms: 5
The sum of the series is: 5
"""