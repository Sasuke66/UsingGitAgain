num = 1

while(num < 10000):
    print(f'elif num == {num}:')
    if(num % 2 == 0):
        print('\tprint(\'Even\')')
    else:
        print('\tprint(\'Odd\')')
    num += 1