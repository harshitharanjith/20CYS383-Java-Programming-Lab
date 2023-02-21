class Point:
    def _init_(self,x,y):
        self.x=x 
        self.y=y 
        
    def show(self):
        p=(self.x,self.y)
        print(p)
        
    def move(self,m,n):
        self.x=self.x+m
        self.y=self.y+n
        
        
    def dist(self,fles):
        d=((fles.x-self.x)**2 + (fles.y-self.y)**2)**0.5
        print(d)
        
p1=Point(2,3)
p2=Point(3,3)
p1.show()
p2.show()
move(10,-10)
p1.show()
p2.show()
p1.dist(p2)