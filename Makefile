#MakeFile for compiling entire project
CC = g++ #compiler to use
OPTIONS = -g -Wall 

all: IpFunc.o
	${CC} ${OPTIONS} IpFunc.o -o myip ./ip/ip.cpp

IpFunc.o: ./ip/IpFunc.cpp ./include/IpFunc.h
	${CC} ${OPTIONS} -c ./ip/IpFunc.cpp	
clean:
	@echo "Cleaning up.."
	rm -rf *.o
	rm -rf myip
