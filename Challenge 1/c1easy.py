name = input("Please enter your name: ")
age = input("Please enter your age: ")
uname = input("Please enter your username: ")

outFile = open("pythonOut.txt", 'w')
outFile.write("Your name is " +name +", you are " +age +" years old, and your username is " +uname)
outFile.close()
