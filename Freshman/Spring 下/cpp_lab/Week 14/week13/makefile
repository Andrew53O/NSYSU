CC = g++
TARGET1 = main
TARGET2 = Grass
TARGET3 = Fire
TARGET4 = Water
TARGET5 = Pokemon
TARGET6 = q3
FLAG = -std=c++11

all: $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp $(TARGET4).cpp $(TARGET5).cpp $(TARGET6).cpp
	$(CC) $(FLAG) -c $(TARGET1).cpp $(TARGET2).cpp $(TARGET3).cpp $(TARGET4).cpp $(TARGET5).cpp $(TARGET6).cpp
	$(CC) $(FLAG) -o $(TARGET1) $(TARGET1).o $(TARGET2).o $(TARGET3).o $(TARGET4).o $(TARGET5).o 
	$(CC) $(FLAG) -o  $(TARGET6) $(TARGET6).cpp


clean:
	rm -f $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) $(TARGET5)  $(TARGET6)
	rm -f $(TARGET1).o $(TARGET2).o $(TARGET3).o $(TARGET4).o $(TARGET5).o  $(TARGET6).o
	

