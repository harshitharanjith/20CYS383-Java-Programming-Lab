class individual:
    def __init__(self,character_name):
        self.character_name = character_name
        
    def get_character_name(self):
        return self.character_name
        
individual1=individual("Buster")
individual2=individual("Tobyas")

print(individual1.get_character_name())
print(individual2.get_character_name())