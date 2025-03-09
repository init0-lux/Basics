class This:
    def __init__(self, value, nextNode = None):
        self.value = value
        #self.nextNode = nextNode
        self.node = nextNode

node1 = This("1")
node2 = This("2")
node4 = This("4")

node1.nextNode = node2
node2.nextNode = node4
node4.ThisNode = node1

currNode = node1

while True:
    print(currNode.value)
    if currNode.nextNode is None:
        print("you've reached the end")
        break
    else:
        currNode = currNode.nextNode
    try:
        print(currNode.ThisNode)
    except:
        continue
