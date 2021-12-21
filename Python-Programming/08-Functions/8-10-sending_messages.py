#!/usr/bin/python3
# prints each text message and moves each message to a new list called sent_messages


def show_messages(messages):
        """print every text message"""
        for message in messages:
                print(message)

def send_messages(menssage, sendMessages):
        """moves messages from one list to another"""
        while menssage:
                aux = menssage.pop()
                print(aux)
                sendMessages.append(aux)

messages = ["Life is not waiting for the storm to pass. It's learning to dance in the rain.", "Let go of what doesn't move you forward.", "If you're going to give up something, give up being weak.", "Those who are in a hurry, stumble."]
sendMessages = []

send_messages(messages, sendMessages)

print("------original message list------")
show_messages(messages)
print("------sent messages list------")
show_messages(sendMessages)
