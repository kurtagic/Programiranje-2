import struct

binary_numbers = [0b0000010, 0b00001111, 0b10001001, 0b10000000, 0b10000000]

binary_data = struct.pack('5B', *binary_numbers)

with open('input.bin', 'wb') as binary_file:
    binary_file.write(binary_data)

