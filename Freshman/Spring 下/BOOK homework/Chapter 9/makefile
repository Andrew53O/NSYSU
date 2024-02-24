CC = g++
TARGET1 = 2_encrypted
TARGET2 = 4_hate_you
TARGET3 = 4_stringstream

FLAG = -std=c++11

all: $(TARGET1).cpp 
	$(CC) $(FLAG) -c $(TARGET1).cpp $(TARGET2).cpp
	$(CC) $(FLAG) -o $(TARGET1) $(TARGET1).o 
	$(CC) $(FLAG) -o $(TARGET2) $(TARGET2).o
	$(CC) $(FLAG) -o $(TARGET3) $(TARGET3).o


clean:
	rm -f $(TARGET1) $(TARGET2) $(TARGET3)
	rm -f $(TARGET1).o $(TARGET2).o $(TARGET3).o

 #$(TARGET3)
# $(TARGET2).o $(TARGET3).o 
# $(TARGET2).cpp $(TARGET3).cpp 
# $(TARGET2).cpp $(TARGET3).cpp 