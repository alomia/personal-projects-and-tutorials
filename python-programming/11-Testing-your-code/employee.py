class Employee:
        """collects information about an employee"""

        def __init__(self, name, last_name, salary):
                """variable initialization"""
                self.name = name
                self.last_name = last_name
                self.salary = salary
        
        def give_raise(self, increase=5000):
                """annual salary increase"""
                self.salary += increase