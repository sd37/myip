#MakeFile for compiling entire project

all: 
	g++ -o myip ip.cpp
clean:
	rm -rf *.0
	rm-rf myip
