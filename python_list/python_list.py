# A list comprehension example in Python
#
# Expanson of example from Sebesta 2012, p. 284
# Jim Teresco, The College of Saint Rose, Fall 2014
#
# First, let's make a list of some numbers
lst = [2, 3, 7, 23, 17, 49, 13, 0, 97]
print ("Original list: " + str(lst))
# now try a couple of list comprehensions
print ("Squared list: " + str([x * x for x in lst]))
print ("Halve big numbers from list: " + str([x/2 for x in lst if x > 25]))
