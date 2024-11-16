numbers = [int(input()) for _ in range(5)]

mean = sum(numbers) // 5

numbers.sort()
median = numbers[2]

print(mean)
print(median)
