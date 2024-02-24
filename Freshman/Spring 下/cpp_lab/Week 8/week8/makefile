c = g++
v = -std=c++11

f1 = q1
f2 = q2
f3 = q3
f4 = q4

all: $(f1).cpp $(f2).cpp $(f3).cpp $(f4).cpp
	$(c) $(v) -c $(f1).cpp $(f2).cpp $(f3).cpp $(f4).cpp
	$(c) $(v) -o $(f1) $(f1).o
	$(c) $(v) -o $(f2) $(f2).o
	$(c) $(v) -o $(f3) $(f3).o	
	$(c) $(v) -o $(f4) $(f4).o
	
clean:
	rm -f $(f1) $(f2) $(f3) $(f4)
	rm -f $(f1).o $(f2).o $(f3).o $(f4).o
