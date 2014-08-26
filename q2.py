#!/usr/bin/env python

'''
Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, /. Each operand may be an integer or another expression.

Some examples:
  ["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
  ["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6
'''

class Solution:
    # @param tokens, a list of string
    # @return an integer
  def evalRPN(self, tokens):
    oper = {
        '+':lambda x,y:x+y,
        '-':lambda x,y:x-y,
        '*':lambda x,y:x*y,
        '/':lambda x,y:int(x/y)
    }
    stk = []
    for item in tokens:
        if item not in ['+','-','*','/']:
            stk.append(int(item))
        else:
            print(stk)
            op2 = stk.pop()
            op1 = stk.pop()
            stk.append(oper[item](op1,op2))
    return stk[0]

if __name__ == '__main__':
    a = Solution()
    tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
    print(a.evalRPN(tokens))