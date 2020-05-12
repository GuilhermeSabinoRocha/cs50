def main():

    h = getp()

    i = 0
    j = 0
    k = 0

    for i in range (h):
        for j in range (h-i-1):
            print(f" ", end="")
        for k in range (i+1):
            print(f"#", end="")
        print("")


def getp():

    while True:
        print(f"Height: ", end="")
        n = int(input())
        if n > 0 and n < 9:
            return n
            break

main()