def word_count():
    """Count the number of words in a text file."""
    f=open("example.txt","r")
    text=f.read()
    words=text.split()
    print("Number of words in the file: ",len(words))
word_count()