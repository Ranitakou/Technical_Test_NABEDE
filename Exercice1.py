for i in range(1, 101):
    if i % 3 == 0:
        print("Hello", end="")
    if i % 5 == 0:
        print("World", end="")
    if i % 7 == 0:
        print("Yoo", end="")
    if i % 3 != 0 and i % 5 != 0 and i % 7 != 0:
        print(i, end="")
    print()
