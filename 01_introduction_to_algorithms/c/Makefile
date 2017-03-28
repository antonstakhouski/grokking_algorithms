TARGET=01_binary_search
all: $(TARGET).o
	gcc $(TARGET).o -o $(TARGET)
$(TARGET).o: $(TARGET).c
	gcc -c $(TARGET).c
clean:
	rm -rf $(TARGET) *.o
