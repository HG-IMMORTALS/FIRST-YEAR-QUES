def find_sum_of_digits(number):
    sum_of_digits = 0
    number_str = str(number)
    for digit in number_str:
        sum_of_digits += int(digit)
    return sum_of_digits

number = int(input("Enter a number: "))
sum_of_digits = find_sum_of_digits(number)
print("Sum of digits:", sum_of_digits)

#Output
"""
Enter a number: 23
Sum of digits: 5
"""
