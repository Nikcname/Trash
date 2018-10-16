class Tree(object):
  def __init__(self):
    self.left = None
    self.right = None
    self.data = None

def printTree(root):
  if(root):
     printTree(root.left)
     print(root.data)
     printTree(root.right)

def calculate(root):
  if root.left :
    calculate(root.left)
    if root.data == '+':
      root.data = root.right.data + root.left.data
      return root.data
    elif root.data == '-':
      root.data = root.left.data - root.right.data
      return root.data

    
#3-8-89-1

def insrt(root, data, value):
  tmp = Tree()
  tmp.left = root
  tmp.data = data
  tmp.right = Tree()
  tmp.right.data = value
  return tmp

strin = "3-8+1-1"
i = int(0)
root = Tree()
root.left = Tree()
root.right = Tree()

while(i < len(strin)):
  i=i+1
  if strin[i] == '-' or strin[i] == '+' or strin[i] == '*' or strin[i] == '/':
    break

root.data = int(strin[0: i])

sign = strin[i]
while(i < len(strin)):
  print(strin[i])
  root = insrt(root, sign, 8)
  i=i+1
root = insrt(root, '-', 8)
root = insrt(root, '+', 1)
root = insrt(root, '-', 1)

#printTree(root)

print (calculate(root))
