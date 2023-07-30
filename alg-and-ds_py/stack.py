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
