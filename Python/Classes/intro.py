class Puppy:

  def __init__(self, name):
    self.stomach = 6
    self.happiness = 6
    self.alive = True
    self.name = name

  @classmethod
  def play_together(cls, puppies):
    for puppy in puppies:
      puppy.play()
      puppy.stomach -= 1

    print("All the puppies played together!")

  @classmethod
  def create_a_litter(cls, names):
    litter = []
    for name in names:
      new_puppy = cls(name)
      litter.append(new_puppy)
    return litter

  def feed(self):
    self.stomach += 1

  def pet(self):
    self.happiness += 1
  
  def play(self):
    if self.alive:
      self.stomach -= 1
      self.happiness -= 1

      if self.stomach < 5:
        self.alive = False

    if not self.alive:
      print("%s seems to be dead" % self.name)
    else:
      if self.happiness >= 5:
        print("Woof woof!")
      else:
        print("Whimper Whimper")



rob = Puppy("Rob")
rob.play()

# TODO
# Feed and pet the puppy!

# TODO
# Create a puppy named Evaline.


# TODO 
# Use create_a_litter to create 3 puppies
# Then pet and play with each of them.

# TODO 
# have those 3 puppies, and Evaline play together with play_together


