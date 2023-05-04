CC = g++
TARGET1 = q1
TARGET2 = q2
TARGET3 = q3
TARGET4 = q4
all: $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp $(TARGET2).cpp
	$(CC) -c $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp $(TARGET4).cpp
	$(CC) -o $(TARGET1) $(TARGET1).o
	$(CC) -o $(TARGET2) $(TARGET2).o
	$(CC) -o $(TARGET3) $(TARGET3).o
	$(CC) -o $(TARGET4) $(TARGET4).o
clean:
	rm -f $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4)
	rm -f $(TARGET1).o $(TARGET2).o $(TARGET3).o $(TARGET4).o 
	
