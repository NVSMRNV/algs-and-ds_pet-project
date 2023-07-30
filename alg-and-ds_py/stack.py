class Stack:
    def __init__(self) -> None:
        self.stack = []

    def push(self, item: int):
        self.stack.append(item)

    def pop(self):
        if not self.stack:
            return None
        removed = self.stack.pop()
        return removed


def main():
    st = Stack()
    st.push(1)
    st.push(2)
    st.push(3)

    print(st.pop())
    print(st.stack)



if __name__ == '__main__':
    main()
