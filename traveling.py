import sys
from io import StringIO
import unittest


class TestClass(unittest.TestCase):
    def assertIO(self, input, output):
        stdout, stdin = sys.stdout, sys.stdin
        sys.stdout, sys.stdin = StringIO(), StringIO(input)
        resolve()
        sys.stdout.seek(0)
        out = sys.stdout.read()[:-1]
        sys.stdout, sys.stdin = stdout, stdin
        self.assertEqual(out, output)

    def test_入力例_1(self):
        input = """2
3 1 2
6 1 1"""
        output = """Yes"""
        self.assertIO(input, output)

    def test_入力例_2(self):
        input = """1
2 100 100"""
        output = """No"""
        self.assertIO(input, output)

    def test_入力例_3(self):
        input = """2
5 1 1
100 1 1"""
        output = """No"""
        self.assertIO(input, output)


if __name__ == "__main__":
    unittest.main()


def resolve():
    n = int(input())
    txy = [map(int, input().split()) for _ in range(n)]
    t, x, y = [list(i) for i in zip(*txy)]
    t_prev = x_prev = y_prev = 0
    for i in range(n):
        moving = abs(x[i] - x_prev) + abs(y[i] - y_prev)
        progress = t[i] - t_prev
        if progress < moving or (progress - moving) % 2 == 1:
            print('No')
            break
        t_prev = t[i]
        x_prev = x[i]
        y_prev = y[i]
    else:
        print('Yes')
