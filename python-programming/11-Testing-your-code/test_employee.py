#!/usr/bin/python3
import unittest
from employee import Employee

class EmployeeTestCase(unittest.TestCase):
        """Test for the class Employee"""

        def setUp(self):
                self.carlos = Employee('Carlos', 'Rivas', 50000)

        def test_give_default_raise(self):
                """default salary increase test"""
                self.carlos.give_raise()
                self.assertEqual(self.carlos.salary, 55000)
        
        def test_give_custom_raise(self):
                """salary increase test"""
                self.carlos.give_raise(7000)
                self.assertEqual(self.carlos.salary, 57000)

if __name__ == '__main__':
        unittest.main()