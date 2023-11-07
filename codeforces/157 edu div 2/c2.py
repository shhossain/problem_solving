n = int(input())
ticket_pieces = input().split()
lucky_sums = {str(i): 0 for i in range(1, 19)}

# Calculate the sums of all possible two-digit numbers
for i in range(1, 10):
    for j in range(1, 10):
        lucky_sums[str(i + j)] += 1

lucky_pairs = 0

for piece in ticket_pieces:
    length = len(piece)
    half_length = length // 2
    current_sum = 0

    # Calculate the sum of digits in the current piece
    for digit in piece:
        current_sum += int(digit)

    # Calculate the target sum needed for the other half of the lucky ticket
    target_sum = current_sum * 2

    if target_sum in lucky_sums:
        lucky_pairs += lucky_sums[str(target_sum)]

# Count the pairs where i=j (concatenating the same piece)
lucky_pairs += n * (n - 1) // 2

print(lucky_pairs)
