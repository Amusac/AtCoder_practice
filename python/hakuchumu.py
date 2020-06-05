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
        input = """erasedream"""
        output = """YES"""
        self.assertIO(input, output)

    def test_入力例_2(self):
        input = """dreameraser"""
        output = """YES"""
        self.assertIO(input, output)

    def test_入力例_3(self):
        input = """dreamerer"""
        output = """NO"""
        self.assertIO(input, output)


if __name__ == "__main__":
    unittest.main()


def resolve():
    s = input()
    l = len(s)
    count = 0
    while True:
        if s[-5 - count:-count if count !=
             0 else None] == "dream" or s[-5 - count:-count if count !=
                                          0 else None] == "erase":
            count += 5
        elif s[-6 - count:-count if count !=
               0 else None] == "eraser":
            count += 6
        elif s[-7 - count:-count if count !=
               0 else None] == "dreamer":
            count += 7
        else:
            break
        if count == l:
            break
    if count == l:
        print("YES")
    else:
        print("NO")
