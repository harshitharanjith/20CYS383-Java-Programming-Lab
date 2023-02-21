class Individual:
    def _init_(self, character_name, happy = True):
        self.character_name = character_name
        self.happy = happy
        
    def get_character_name(self):
        return self.character_name
        
    def is_happy(self):
        return self.happy
    
    def switchmod(self):
        self.happy = False
    
    def speak(self):
        if(self.happy) == True:
            print("Hello i am " + self.character_name)
        else:
            print("Go away!")
   
individual1 = Individual("buster")
individual2 = Individual("tobias")
 
individual1.switchmod()   
individual2.switchmod()

print(individual1.speak())
print(individual2.speak())