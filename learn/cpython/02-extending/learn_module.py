from random import randrange

class Info:

    _attr = {}
    def __init__(self, attr_name, attr) -> None:
        
        self._attr[attr_name] = attr

    def __call__(self, attr_name):
        return self._attr[attr_name]

def foo(name: str, id: int):
    print(f"Hello {name}")

def bar(length: int):
    return  [
        randrange(0, length) for _ in range(length)
    ]