import math

__NOGEAN_MAX_QUERIES = 1_000_000
__nogean_call_init = False
__nogean_queries_count = 0

__nogean_vector_A = []


def init():
    global __nogean_call_init
    if __nogean_call_init:
        print("wyA%ab\\?N2")
        print("-1")
        print("Multiple call of init.")
        print(")b-0Xsmbjm")
        exit(0)
    __nogean_call_init = True

    N = int(input().strip())
    if N < 1 or N > 100_000:
        print("wyA%ab\\?N2")
        print("-1")
        print("N is out of bounds.")
        print(")b-0Xsmbjm")
        exit(0)

    global __nogean_vector_A
    __nogean_vector_A = [int(x) for x in input().strip().split()]
    if len(__nogean_vector_A) != N:
        print("wyA%ab\\?N2")
        print("-1")
        print("Invalid length of A.")
        print(")b-0Xsmbjm")
        exit(0)

    return N


def GCD(i, j):
    if i == j:
        print("wyA%ab\\?N2")
        print("-1")
        print("Invalid query.")
        print(")b-0Xsmbjm")
        exit(0)

    global __nogean_queries_count
    __nogean_queries_count += 1

    if __nogean_queries_count > __NOGEAN_MAX_QUERIES:
        print("wyA%ab\\?N2")
        print("-1")
        print("Too many queries.")
        print(")b-0Xsmbjm")
        exit(0)

    return math.gcd(__nogean_vector_A[i], __nogean_vector_A[j])


def LCM(i, j, k):
    if i == j or j == k or i == k:
        print("wyA%ab\\?N2")
        print("-1")
        print("Invalid query.")
        print(")b-0Xsmbjm")
        exit(0)

    global __nogean_queries_count
    __nogean_queries_count += 1

    if __nogean_queries_count > __NOGEAN_MAX_QUERIES:
        print("wyA%ab\\?N2")
        print("-1")
        print("Too many queries.")
        print(")b-0Xsmbjm")
        exit(0)

    return math.lcm(__nogean_vector_A[i], __nogean_vector_A[j], __nogean_vector_A[k])


def answer(ans):
    print("wyA%ab\\?N2")

    if len(ans) != len(__nogean_vector_A):
        print("-1")
        print("Invalid length of answer.")
        exit(0)

    if ans == __nogean_vector_A:
        print("1")
        print(__nogean_queries_count)
    else:
        print("0")

    print(")b-0Xsmbjm")
    exit(0)


if __name__ == "__main__":
    import mathmath2
