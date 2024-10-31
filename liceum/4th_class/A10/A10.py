# Zadanie 3.1
def count_fragments_above_90(pi_digits):
    count = 0
    for i in range(len(pi_digits) - 1):
        try:
            fragment = int(pi_digits[i] + pi_digits[i + 1])
            if fragment > 90:
                count += 1
        except ValueError as e:
            print(f"Error at index {i}: {e}")
    return count

# Zadanie 3.2
def find_min_max_fragments(pi_digits):
    fragment_counts = [0] * 100

    for i in range(len(pi_digits) - 1):
        fragment = int(pi_digits[i] + pi_digits[i + 1])
        fragment_counts[fragment] += 1

    min_fragment = fragment_counts.index(min(fragment_counts))
    max_fragment = fragment_counts.index(max(fragment_counts))

    return min_fragment, fragment_counts[min_fragment], max_fragment, fragment_counts[max_fragment]

# Zadanie 3.3
def count_increasing_decreasing_sequences(pi_digits):
    count = 0
    for i in range(len(pi_digits) - 5):
        sequence = pi_digits[i:i + 6]
        if sequence == ''.join(sorted(sequence)) or sequence == ''.join(sorted(sequence, reverse=True)):
            count += 1
    return count

# Zadanie 3.4
def find_longest_increasing_decreasing_sequence(pi_digits):
    max_length = 0
    start_position = 0

    current_length = 1
    current_position = 0

    for i in range(1, len(pi_digits)):
        if pi_digits[i] >= pi_digits[i - 1]:
            current_length += 1
        else:
            if current_length > max_length:
                max_length = current_length
                start_position = current_position
            current_length = 1
            current_position = i

    return start_position, pi_digits[start_position:start_position + max_length]

# Wczytanie danych z pliku pi.txt
with open("pi.txt", "r", encoding="utf-8-sig") as file:  
    pi_digits = file.read()

# Print pi_digits for debugging
print("pi_digits:", pi_digits)

# Zapis wyników do pliku wyniki3.txt
with open("wyniki3.txt", "w") as output_file:
    # Zadanie 3.1
    result_3_1 = count_fragments_above_90(pi_digits)
    output_file.write(f"3.1. {result_3_1}\n")

    # Zadanie 3.2
    min_fragment, min_fragment_count, max_fragment, max_fragment_count = find_min_max_fragments(pi_digits)
    output_file.write(f"3.2. {min_fragment} {min_fragment_count}\n{max_fragment} {max_fragment_count}\n")

    # Zadanie 3.3
    result_3_3 = count_increasing_decreasing_sequences(pi_digits)
    output_file.write(f"3.3. {result_3_3}\n")

    # Zadanie 3.4
    start_position, sequence = find_longest_increasing_decreasing_sequence(pi_digits)
    output_file.write(f"3.4.\n{start_position}\n{sequence}\n")
