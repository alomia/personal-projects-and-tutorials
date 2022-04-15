def make_sandwich(*toppings):
        """prints a list of the ingredients you have added to your sandwich."""
        print("The ingredients he added to his sandwich are:")
        for topping in toppings:
                print(f"- {topping}")
