import math

class Shape(object):
    def __init__(self, width, height, name):
        self.width = int(width)
        self.height = int(height)
        self.name = str(name).lower()
        pass
    def area(self):
        if (self.name == "rectangle"):
            return int(self.width * self.height)
        elif (self.name == "square"):
            return int(self.width * self.height)
        elif (self.name == "triangle"):
            return .5 * self.width * self.height
        elif (self.name == "cirlce"):
            return int(math.pi * ((.5 * self.width) ** 2))
        else:
            return int(self.width * self.height)
        pass
    def perimeter(self):
        if (self.name == "rectangle"):
            return int(2 * (self.width + self.height))
        elif (self.name == "cirlce"):
            return int(2 * math.pi * (self.width * 0.5))
        elif (self.name == "square"):
            return int(2 * (self.width + self.height))
        elif (self.name == "triangle"):
            return int((self.width * 2) + self.height)
        else:
            return int(self.width + self.height)
        pass
class Triangle(Shape):
    def __init__(self, side, base, height):
        self.side = int(side)
        self.base = int(base)
        self.height = int(height)
    def perimeter(self):
        return int(self.side + self.base + self.height)
    def area(self):
        return int(.5 * self.base * self.height)
    def sides_setup(self, side1,side2,side3):
        self.side1 = int(side1)
        self.side2 = int(side2)
        self.side3 = int(side3)
        sides = [self.side,self.base,self.height]
        return sides
class Circle(Shape):
    def __init__(self, radius):
        self.radius = int(radius)
    def perimeter(self):
        return int(2 * math.pi * self.radius)
    def area(self):
        return int(math.pi * (self.radius ** 2))



def main():
    shape = Shape(5,4,"Square")
    triangle = Triangle(5,2,3)
    sides_array = triangle.sides_setup(3,4,5)
    circle = Circle(5)
    print("shape area: " + str(shape.area()))
    print("triangle area: " + str(triangle.area()))
    print("triangle perm: " + str(triangle.perimeter()))
    print("sides array: " + str(sides_array))
    print("circle area: " + str(circle.area()))
    print("circle permimeter: " + str(circle.perimeter()))
main()





