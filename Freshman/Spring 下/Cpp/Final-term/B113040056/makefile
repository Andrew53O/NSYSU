CC = g++
TARGET1 = TwoD
TARGET1-1 = i
TARGET2 = 2
TARGET3 = 3

FLAG = -std=c++11

all: $(TARGET1).cpp $(TARGET1-1).cpp $(TARGET2).cpp $(TARGET3).cpp
	$(CC) $(FLAG) -c $(TARGET1).cpp $(TARGET1-1).cpp $(TARGET2).cpp $(TARGET3).cpp
	$(CC) $(FLAG) -o $(TARGET1-1) $(TARGET1).o $(TARGET1-1).o 
	$(CC) $(FLAG) -o $(TARGET2) $(TARGET2).o
	$(CC) $(FLAG) -o $(TARGET3) $(TARGET3).o
	

clean:
	rm -f $(TARGET1) $(TARGET2) $(TARGET3) 
	rm -f $(TARGET1).o $(TARGET2).o $(TARGET3).o 
	

