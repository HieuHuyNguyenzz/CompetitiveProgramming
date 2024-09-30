def compute(day, x):
    products = 0
    for a, b in x:
        t = day // (b + 1)
        products += (a * b * t) + (day % (b + 1)) * a
    return products

def main():
    n, m = map(int, input().split())
    x = [tuple(map(int, input().split())) for _ in range(n)]

    l, r, ans = 1, int(1e18), 0
    while l <= r:
        mid = (l + r) // 2
        if compute(mid, x) >= m:
            r = mid - 1
            ans = mid
        else:
            l = mid + 1

    print(ans)

if __name__ == "__main__":
    main()
