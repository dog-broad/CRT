def is_possible(s1, s2, s3, knowledge, x):
    if knowledge == x:
        return True

    if len(s1) == 0 and len(s2) == 0 and len(s3) == 0:
        return False

    result = False
    if len(s1) > 0:
        new_s1 = s1[:-1]
        result |= is_possible(new_s1, s2, s3, knowledge | s1[-1], x)
    if len(s2) > 0:
        new_s2 = s2[:-1]
        result |= is_possible(s1, new_s2, s3, knowledge | s2[-1], x)
    if len(s3) > 0:
        new_s3 = s3[:-1]
        result |= is_possible(s1, s2, new_s3, knowledge | s3[-1], x)

    return result

t = int(input())
for _ in range(t):
    n, x = map(int, input().split())
    s1 = list(map(int, input().split()))
    s2 = list(map(int, input().split()))
    s3 = list(map(int, input().split()))

    if is_possible(s1, s2, s3, 0, x):
        print("Yes")
    else:
        print("No")
