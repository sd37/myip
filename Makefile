#MakeFile for compiling entire project

all: 
	g++ -o myip ./ip/ip.cpp
clean:
	rm -rf *.o
	rm -rf myip
