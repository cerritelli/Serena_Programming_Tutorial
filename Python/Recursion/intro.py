# A recursive function is one that calls itself.
# Some problems are more easily solved with a recursive algorithm.
# You don't always want to use recursion, but that's something to get into later.


def countdown(number):
  if number > 0:
    print(number)
    countdown(number - 1)

print("countdown")
countdown(5)


# Part 1
# Fill in the missing two lines that currently say FILL THIS IN


# When you call countdown(5), the following function calls occur
# countdown(5)
# print(5), inside countdown(5)
# countdown(4), inside countdown(5)
# print(4), inside countdown(4)
# countdown(3), inside countdown(4)
# print(3), inside countdown(3)
# countdown(2), inside countdown(3)
# FILL THIS IN
# FILL THIS IN
# print(1), inside countdown(1)
# countdown(0), inside countdown(1)
# And then when countdown(0) is run, 
# the if number > 0 returns false



# This method counts up from 1 to number.
def countup(number):
  if number > 0:
    countup(number - 1)
    print(number)

print("countup")
countup(3)


# Part 2
# Write down the function calls that occur (countup() and print())
# In the order they would appear.








# Part 3
# The fibonacci numbers are a classic recursive mathematical function
# fibonacci numbers are defined such that
# F0 = 1, F1 = 1, FN = F(N - 1) + F(N-2)
# 1, 1, 2, 3, 5, 8, 13, 21, 34

# Fix the following function to correclty print out the Nth fibonacci

def fib(number):
  if number == 0:
    return 1
  if number == 1:
    return 1
  return fib(0) + fib(0) 


tenth_fib = fib(10)
print(tenth_fib == 89)



# Part 4
# Write down the function calls, in the order they are called.
# Starting with fib(5)

# fib(5)
# fib(?)
# fib(?)
# fib(?)
# ...


# Part 5
# The above fibonacci function is not very efficient.  Why?





