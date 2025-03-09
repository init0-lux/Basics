class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
        self.last_node = None

    # func to add elements
    def append(self, data):
        if self.last_node is None:
            self.head = None(data)
            self.last_node = self.head
        # adding node to the tail of linked list
        else:
            self.last_node = Node(data)
            self.last_node = self.last_node.next

    def display(self):
        current = self.head;
        # traverse the linked list
        while current is not None:
            print(current.data, end = ' ');
            current = current.next

        print()

# driver code
if __name__ == "__main__":
    L = LinkedList()
    L.append(1)
    L.append(2)
    L.append(43)

    L.display()
