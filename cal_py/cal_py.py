import random,math
random.seed(1)   
iterations=input()
nb_pts=0
nb_true=0
for i in range(int(iterations)):
    x=random.uniform(0,1)
    y=random.uniform(0,1)
    nb_pts+=1
    if (x*x+y*y) <= 1:
        nb_true+=1
print("Approx=",(float(nb_true)/float(nb_pts))*4)
print("Pré-enregistré=",math.pi)
print("Dif=",((float(nb_true)/float(nb_pts))*4)-math.pi)
